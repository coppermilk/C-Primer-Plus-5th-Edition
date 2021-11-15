#include <iostream>
#include "complex0.h"

using namespace std;

Complex::Complex()
{
    real = imaginary = 0;
}

Complex::Complex(double real, double imaginary)
{
    this->real = real;
    this->imaginary = imaginary;
}

Complex operator~(const Complex& c1)
{
    return Complex(c1.real, c1.imaginary * -1);
}

std::ostream& operator<<(std::ostream & os, const Complex& c) // ! use ostream and const
{
    os << "(" << c.real << "," << c.imaginary << "i)";
    return os;
}

std::istream& operator>>(std::istream & os, Complex& c) // use istream
{
    std::cout << "Real part: ";
    os >> c.real;
    std::cout << "Imaginary part: ";
    os >> c.imaginary;
    return os;
}

Complex operator+(const Complex& c1,  const Complex& c2)
{
    return Complex(c1.real + c2.real, c1.imaginary + c2.imaginary);
}

Complex operator-(const Complex& c1, const Complex& c2)
{
    return Complex(c1.real - c2.real, c1.imaginary - c2.imaginary);
}

Complex operator*(const Complex& c1, const Complex& c2)
{
    return Complex((c1.real * c2.real) - (c1.imaginary - c2.imaginary),
              (c1.real * c2.imaginary) + (c1.imaginary + c2.real));
}

Complex operator*(double mult, const Complex& c1)
{
    return Complex(c1.real * mult, c1.imaginary * mult);
}

Complex operator*(const Complex& c1, double mult)
{
    return Complex(mult * c1);
}
