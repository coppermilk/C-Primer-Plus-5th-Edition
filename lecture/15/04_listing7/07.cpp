#include <iostream>
#include <cstdlib>

double hmean(double a, double b);

int main()
{
	double x, y, z;
	std::cout << "Input two numbers: ";
	while (std::cin >> x >> y) {
		z = hmean(x, y);
		std::cout << "Harmony: " << x << " & " << y << " is " << z << std::endl;
		std::cout << "Input next pair of numbers (q for exit) : ";
	}
	return 0;
}

double hmean(double a, double b) {
	if (a == -b) {
		std::cout << "Bad arguments.\n";
		std::abort();
	}
	return 2.0 * a * b / (a + b);
}

