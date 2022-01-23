#include <iostream>
#include <list>
#include <iterator>

int main()
{
	using namespace std;
	list<int> one(5, 2);
	int stuff[5] = { 1, 2, 4, 8, 6 };
	list<int> two;
	two.insert(two.begin(), stuff, stuff + 5);
	int more[6] = { 6, 4, 2, 4, 6, 5 };
	list<int> three(two);
	three.insert(three.end(), more, more + 6);
	
	cout << "First list:\n";
	ostream_iterator<int, char> out(cout, " ");
	copy(one.begin(), one.end(), out);
	cout << endl;

	cout << "Second list:\n";
	copy(two.begin(), two.end(), out);
	cout << endl;

	cout << "Third list:\n";
	copy(three.begin(), three.end(), out);
	cout << endl;

	three.remove(2);
	cout << "Third list (remove \'2\'):\n";
	copy(three.begin(), three.end(), out);
	cout << endl;

	three.splice(three.begin(), one);
	cout << "Third list after splice: \n";
	copy(three.begin(), three.end(), out);
	cout << endl;

	cout << "First list:\n";
	copy(one.begin(), one.end(), out);
	cout << endl;

	three.unique();
	cout << "Third list after unique:\n";
	copy(three.begin(), three.end(), out);
	cout << endl;

	three.sort();
	three.unique();
	cout << "Third list after unique & sort:\n";
	copy(three.begin(), three.end(), out);
	cout << endl;

	two.sort();
	three.merge(two);
	cout << "Second list sorted and merge with third list:\n";
	copy(two.begin(), two.end(), out);
	cout << endl;

	return 0;


}
