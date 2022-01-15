#pragma once
#include <valarray>
class Wine
{
public:
	void GetBottles();
	char* label;
	int sum();
	void Show();
	char * Label();
	typedef std::valarray<int>ArrayInt;
	typedef std::pair<ArrayInt, ArrayInt> PairArray;
	PairArray data;
	Wine(const char* l, int y, const int yr[], const int bot[]);
	Wine(const char* l, int y);
private:
	//std::string wine_name;
	
};

