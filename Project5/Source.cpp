#include "tvchannel.h"

int main() {
	setlocale(LC_ALL, "russian");
	ifstream in("tv.txt");

	string name, type, movie, time;
	multimap <string, string> tmp;

	while (!in.eof()) {
		in >> name >> type;
		getline(in, movie, '/');
		getline(in, time, '/');

		tmp.insert(pair<string, string>(movie, time));

		TvChannel v(tmp, name, type);
	}



	
	
	system("pause");
	return 0;
}