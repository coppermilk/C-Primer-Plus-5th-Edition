#include <iostream>
#include <cmath>
#include "exc_mean.h"

double hmean(double a, double b) throw (bad_hmean);
double gmean(double a, double b) throw (bad_gmean);

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	double x, y, z;
	cout << "Input two numbers: ";
	while (cin >> x >> y) {
		try {
			z = hmean(x, y);
			cout << "Harmony: " << z << endl;
			cout << "Geometry: " << gmean(x, y) << endl;
		}
		catch(bad_hmean & bg) {
			bg.mesg();
			cout << "Repet input.\n";
			continue;
		}
		catch (bad_gmean& hg) {
			cout << hg.mesg();
			cout << "Sorry try is enof: " << hg.v1 << ", " << hg.v2 << endl;
			break;
		}
	}
}

double hmean(double a, double b) throw(bad_hmean) {
	if (a == -b) {
		throw bad_hmean(a, b);
	}
	return 2.0 * a * b / (a + b);

}
double gmean(double a, double b) throw(bad_gmean) {
	if (a < 0 || b < 0) {
		throw bad_gmean(a, b);
	}
	return std::sqrt(a * b);
}
