//stock20.cpp -- ����������� ������ 
//#include "stdafx.h" --- Visual Studio --- precompiled headers
#include <iostream>
#include <string>

#include "stock20.h"

#pragma warning(disable : 4996)

//-------------------------------------------------------------------------------------------------
// ������������ (������ � ������� ���������) 
Stock::Stock() // ����������� �� ��������� 
{
	std::cout << "Default constructor called\n";
	//company = "no name";
	const char* default_company = "no name";
	company = new char[strlen(default_company) + 1];
	strcpy(company, default_company);
	std::cout << company;
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}
//-------------------------------------------------------------------------------------------------
Stock::Stock(const char* ch , long n, double pr)
{
	company = new char[strlen(ch) + 1];
	strcpy(company, ch);
	//strcpy(compny, co);
	if (n < 0)
	{
		std::cout << "Number of shares can't be negative; "
			<< company << " shares set to 0.\n";
		shares = 0;
	}
	else
		shares = n;

	share_val = pr;
	set_tot();
}

//-------------------------------------------------------------------------------------------------
// ���������� ������ 
Stock::~Stock() // ����������, �� ��������� ��������� 
{
	delete[] company;
}
//-------------------------------------------------------------------------------------------------
// ������ ������
void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		//���������� ������������� ������� �� ����� ���� �������������. ���������� ��������. 
		std::cout << "Number of shares purchased can't be negative. "
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}
//-------------------------------------------------------------------------------------------------
void Stock::sell(long num, double price)
{
	using std::cout;
	if (num < 0)
	{
		// ���������� ����������� ������� �� ����� ���� �������������. ���������� ��������, 
		cout << "Number of shares sold can't be negative. "
			<< "Transaction is aborted.\n";
	}
	else if (num > shares)
	{
		// ������ ������� ������ ����, ��� ��������� �� ��������. ���������� ��������, 
		cout << "You can't sell more than you have! "
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}
//-------------------------------------------------------------------------------------------------
void Stock::update(double price)
{
	share_val = price;
	set_tot();
}
//-------------------------------------------------------------------------------------------------
void Stock::show() const
{
	using std::cout;
	using std::ios_base;
	// ��������� ������� � #.### 
	ios_base::fmtflags orig =
		cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);
	cout << "Company: " << company
		<< " Shares: " << shares << '\n';
	cout << " Share Price: $" << share_val;
	// ��������� ������� � #.## 
	cout.precision(2);
	cout << " Total Worth: $" << total_val << '\n';
	// �������������� ��������� ������� 
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);

}
//-------------------------------------------------------------------------------------------------
const Stock& Stock::topval(const Stock& s) const
{
	if (s.total_val > total_val)
		return s;
	else
		return *this;
}
//-------------------------------------------------------------------------------------------------

std::ostream& operator<<(std::ostream& os, const Stock& s)
{
	using std::cout;
	using std::ios_base;
	
	os << "Company: " << s.company
		<< " Shares: " << s.shares << '\n';
	os << " Share Price: $" << s.share_val;
	// ��������� ������� � #.## 
	os.precision(2);
	os << " Total Worth: $" << s.total_val << '\n';
	return os;
	
}