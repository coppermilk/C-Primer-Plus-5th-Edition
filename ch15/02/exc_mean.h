#pragma once
#include <iostream>
#include <stdexcept>

class bad_hmean : public std::logic_error{
private:
	double v1;
	double v2;
public:
	bad_hmean(double a = 0, double b = 0) : v1(a), v2(b), logic_error("bad argument a = -b/n\n") {}
	void mesg();
};

inline void bad_hmean::mesg() {
	std::cout << "hmean(" << v1 << ", " << v2 << "): bad argument a = -b/n";
}

class bad_gmean : public std::logic_error {
public:
	double v1;
	double v2;
	bad_gmean(double a = 0, double b = 0) : v1(a), v2(b), logic_error("Argument gmean() must be >= 0\n") {}
	const char* mesg();
};

inline const char* bad_gmean::mesg() {
	return "Argument gmean() must be >= 0\n";
}