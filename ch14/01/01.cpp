#include <iostream>
#include "winec.h"

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	cout << "Input name of Wine: ";
	char lab[50];
	cin.getline(lab, 50);
	cout << "Input count of years: ";
	int yrs;
	cin >> yrs;
	Wine holding(lab, yrs);
	holding.GetBottles();
	holding.Show();
	const int YRS = 3;
	int y[YRS] = { 1993, 1995, 1998 };
	int b[YRS] = { 48, 60, 72 };

	Wine more("Gushing Grape RED", YRS, y, b);
	more.Show();
	cout << "Sum count of bottle " << more.Label()
		<< ": " << more.sum() <<"." << endl;
	cout << "Done";
	return 0;

}
