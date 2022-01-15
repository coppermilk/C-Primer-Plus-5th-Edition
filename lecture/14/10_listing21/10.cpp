#include <iostream>
#include "stacktp1.h"

template <template <typename T> class Thing>
class Crab {
private:
	Thing<int> s1;
	Thing<double> s2;
public:
	Crab() {};
	bool push(int a, double x) { return s1.push(a) && s2.push(x); }
	bool pop(int& a, double& x) { return s1.pop(a) && s2.pop(x); }

};

int main() {
	using std::cout;
	using std::cin;
	using std::endl;

	Crab<Stack> nebula;

	int ni;
	double nb;
	cout << "Input int & double, as \'4 3.5\' (0 for quite): " << endl;

	while (cin >> ni >> nb && ni > 0 && nb > 0) {
		if (!nebula.push(ni, nb)) {
			break;
		}
	}
	while (nebula.pop(ni, nb))
	{
		cout << ni << ", " << nb << endl;
	}
	cout <<"Done!" << endl;
	return 0;

}
