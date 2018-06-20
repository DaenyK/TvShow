#pragma once
#include "Headers.h"

class TvChannel{
private:
	multimap <string, string> nameAndTimeOfMovie;

	string nameOfChannel;
	string typeOfChannel;

public:
	TvChannel() = default;
	TvChannel(multimap <string, string> nameAndTimeOfMovie, string name, string type);

	TvChannel (const TvChannel& obj);

	//bool operator==(TvChannel obj);
	//bool operator!=(TvChannel obj);
	//bool operator>(TvChannel obj);
	//bool operator<(TvChannel obj);

	friend istream&  operator >> (istream&is, TvChannel &obj);
	friend ostream& operator<<(ostream&os, TvChannel obj);

	//~TvChannel();
};

