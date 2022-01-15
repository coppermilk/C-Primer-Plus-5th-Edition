#include "winec.h"
#include <iostream>
#pragma warning(disable : 4996)
void Wine::GetBottles()
{
	int array_size = data.first.size();
	for (int i = 0; i < array_size; i++) {
		std::cout << "Input years: ";
		std::cin >> data.first[i];
		std::cout << "Input bottles count: ";
		std::cin >> data.second[i];
	}
}
int Wine::sum()
{
	return data.second.sum();
}
void Wine::Show()
{
	std::cout << "Wine: " << label << std::endl;
	int arr_size = data.first.size();
	std::cout << "\tYear \tBottles"<< std::endl;
	for (int i = 0; i < arr_size; i++) {
		std::cout << "\t" << data.first[i] 
			<< "\t" << data.second[i] << std::endl;
	}
}
char* Wine::Label()
{
	return label;
}
Wine::Wine(const char* l, int y, const int yr[], const int bot[])
{
	label = new char[strlen(l) + 1];
	strcpy(label, l);
	
	data.first.resize(y);
	data.second.resize(y);

	for (int i = 0; i < y; i++) {
		data.first[i] = yr[i];
		data.second[i] = bot[i];
	}

}

Wine::Wine(const char* l, int y)
{
	label = new char[50 + 1];
	strncpy(label, l, 50);
	label[50] = '\0';
	data.first.resize(y);
	data.second.resize(y);
}
