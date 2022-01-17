#include <iostream>
#include <cfloat>

bool hmean(double a, double b, double * ans);

int main()
{
	double x, y, z;
	std::cout << "Input two numbers: ";
	while (std::cin >> x >> y) {
		if (hmean(x, y, &z)) {
			std::cout << "Harmony: " << x << " & " << y << " is " << z << std::endl;
			std::cout << "Input next pair of numbers (q for exit) : ";

		}
		else {
			std::cout << "Function can't be processig diviving to zero.\n";
		}
		std::cout << "Input next pair of numbers (q for exit): ";
	}
	return 0;
}

bool hmean(double a, double b, double * ans) {
	if (a == -b) {
		//std::cout << "Bad arguments.\n";
		//std::abort();
		*ans = DBL_MAX;
		return false;
	}
	else {
		*ans = 2.0 * a * b / (a + b);
		return true;
	}
}

