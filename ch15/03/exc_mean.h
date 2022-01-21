// exc_mean.h � ������ ���������� ��� hmean() � gmean() 
#ifndef EXC_MEAN_H_
#define EXC_MEAN_H_
#include <iostream>
#include <stdexcept>

//-------------------------------------------------------------------------------------------------
class bad_hmean : public std::logic_error
{
private:
	double v1;
	double v2;
public:
	bad_hmean(double a = 0, double b = 0) : v1(a), v2(b), logic_error("invalid arguments: a = -b\n") {}
	void mesg();
};
//-------------------------------------------------------------------------------------------------
inline void bad_hmean::mesg()
{
	std::cout << "hmean(" << v1 << ", " << v2 << "): "
		<< "invalid arguments: a = -b\n";	// �������� ��������� 
}
//-------------------------------------------------------------------------------------------------
class bad_gmean : public std::logic_error
{
public:
	double v1;
	double v2;
	bad_gmean(double a = 0, double b = 0) : v1(a), v2(b), logic_error(" arguments should be >= 0\n") {}
	const char* mesg();
};
//-------------------------------------------------------------------------------------------------
inline const char* bad_gmean::mesg()
{
	return "gmean() arguments should be >= 0\n";	// ��������� gmean() ������ ���� >= 0 
}
//-------------------------------------------------------------------------------------------------
#endif // EXC_MEAN_H_