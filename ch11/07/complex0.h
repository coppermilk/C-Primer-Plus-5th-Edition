#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include <iostream>
class Complex
{
private:
	double real;
	double imaginary;
	
public:
	Complex();
	Complex(double real, double imaginary);
	
	
	friend std::ostream& operator <<(std::ostream & os, const Complex& c);
	friend std::istream& operator >>(std::istream & os, Complex& c);

	friend Complex operator +(const Complex& c1, const Complex& c2);
	friend Complex operator -(const Complex& c1, const Complex& c2);
	friend Complex operator *(const Complex& c1, const Complex& c2);
	friend Complex operator *(double mult, const Complex& c1);
	friend Complex operator *(const Complex& c1, double mult);

	friend Complex operator~(const Complex& c1);
};

#endif //COMPLEX0_H_