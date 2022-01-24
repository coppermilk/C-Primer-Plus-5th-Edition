#include <iostream>
#include <string>
#include <map>
#include <algorithm>

typedef int KeyType;
typedef std::pair<const KeyType, std::string> Pair;
typedef std::multimap<KeyType, std::string> MapCode;

int main()

{
	using namespace std;
	MapCode codes;
	codes.insert(Pair(415, "San Francisco"));
	codes.insert(Pair(410, "Oakland"));
	codes.insert(Pair(718, "Brooklyn"));
	codes.insert(Pair(718, "Staten Island"));
	codes.insert(Pair(415, "Staten Island"));
	codes.insert(Pair(510, "Berkeley"));
	
	cout << "Numbers of citys with code 415: "
		<< codes.count(415) << endl;
	cout << "Numbers of citys with code 718: "
		<< codes.count(718) << endl;
	cout << "Numbers of citys with code 510: "
		<< codes.count(510) << endl;

	cout << "Code of sity\n";

	MapCode::iterator it;
	for (it = codes.begin(); it != codes.end(); ++it) {
		cout << " " << (*it).first << " " << (*it).second << endl;
	}

	pair<MapCode::iterator, MapCode::iterator> range = codes.equal_range(718);
	cout << "Citys with code 718: \n";
	for (it = range.first; it != range.second; ++it) {
		cout << (*it).second << endl;
	}

}
