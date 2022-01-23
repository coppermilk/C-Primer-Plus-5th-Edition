#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
	using namespace std;
	int casts[10] = { 6, 7, 2, 9, 4, 11, 8, 7, 10, 5 };
	vector<int> dice(10);

	copy(casts, casts +10, dice.begin());

	cout << "Output dice: \n";

	ostream_iterator<int, char>out_iterator(cout, " ");
	// copy  vector to cout
	copy(dice.begin(), dice.end(), out_iterator);
	cout << endl;

	for (auto i : dice) {
		std::cout << i << ' '; 
	}
	cout << endl;

	// non extern reverse iterator
	vector<int>::reverse_iterator ri;
	for (ri = dice.rbegin(); ri != dice.rend(); ++ri) {
		cout << *ri << ' ';
	}
	cout << endl;

}
