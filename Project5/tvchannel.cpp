#include "tvchannel.h"

TvChannel::TvChannel(multimap<string, string> nameAndTimeOfMovie, string name, string type)
{
	this->nameAndTimeOfMovie = nameAndTimeOfMovie;
	this->nameOfChannel = name;
	this->typeOfChannel = type;
}

TvChannel::TvChannel(const TvChannel & obj)
{
	this->nameAndTimeOfMovie = obj.nameAndTimeOfMovie;
	this->nameOfChannel = obj.nameOfChannel;
	this->typeOfChannel = obj.typeOfChannel;
}



istream & operator >> (istream & is, TvChannel & obj)
{
	string movie, time;
	is >> obj.nameOfChannel >> obj.typeOfChannel;
	while (!is.eof()) {
		getline(is, movie, '/');
		getline(is, time,'/');
		obj.nameAndTimeOfMovie.insert(pair<string, string>(movie, time));
	}

	return is;
}

ostream & operator<<(ostream & os, TvChannel obj)
{
	os <<obj.nameOfChannel << "\t" << obj.typeOfChannel << endl;
	for (auto it = obj.nameAndTimeOfMovie.begin(); it != obj.nameAndTimeOfMovie.end(); ++it)
	{
		os << it->first << " : " << it->second << endl;
	}
	return os;
}
