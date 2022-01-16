#include "emp.h"

abstr_emp::abstr_emp()
{
	lname = "null";
	fname = "null";
	job = "null";
}

abstr_emp::abstr_emp(const std::string& fn, const std::string& ln, const std::string& j)
{
	lname = ln;
	fname = fn;
	job = j;
}

void abstr_emp::ShowAll()
{
	std::cout << "First name: " << fname << std::endl;
	std::cout << "Last name: " << lname << std::endl;
	std::cout << "Job: " << job << std::endl;
}

void abstr_emp::SetAll()
{
	std::cout << "First name: ";
	std::cin >> fname;

	std::cout << "Last name: ";
	std::cin >> lname;

	std::cout << "Job: ";
	std::cin >> job;

}

std::ostream& operator<<(std::ostream& os, const abstr_emp& e)
{
	os << "First name: " << e.fname << std::endl;
	os << "Last name: " << e.lname << std::endl;
	os << "Job: " << e.job << std::endl;

	return os;
}

employee::employee() : abstr_emp()
{
}

employee::employee(const std::string& fn, const std::string& ln, const std::string& j) : abstr_emp(fn, ln, j)
{
}

//void employee::ShowAll() const
void employee::ShowAll()
{
	abstr_emp::ShowAll();
}

void employee::SetAll()
{
	abstr_emp::SetAll();
}

abstr_emp::~abstr_emp() {

}

void manager::setUniqueValue()
{
	std::cout << "Inchargeof: ";
	std::cin >> inchargeof;
}

void manager::showUniqueValue()
{
	std::cout << "Inchargeof: " << inchargeof << std::endl;
}

manager::manager() : abstr_emp()
{
	inchargeof = 0;
}

manager::manager(const std::string& fn, const std::string& ln, const std::string& j, int ico) : abstr_emp(fn, ln, j)
{
	inchargeof = ico;
}

manager::manager(const abstr_emp& e, int ico) : abstr_emp(e)
{
	inchargeof = ico;
}

manager::manager(const manager& m) : abstr_emp(m)
{
	inchargeof = m.inchargeof;
}

//void manager::ShowAll() const
void manager::ShowAll()
{
	abstr_emp::ShowAll();
	showUniqueValue();
}

void manager::SetAll()
{
	abstr_emp::SetAll();
	setUniqueValue();
}

void fink::setUniqueValue()
{
	std::cout << "Reportsto: ";
	std::cin >> reportsto;
}

void fink::showUniqueValue()
{
	std::cout << "Reportsto: " << reportsto << std::endl;
}

fink::fink() : abstr_emp()
{
	reportsto = "null";
}

fink::fink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo) : abstr_emp(fn, ln, j)
{
	reportsto = rpo;
}

fink::fink(const abstr_emp& e, const std::string& rpo) : abstr_emp(e)
{
	reportsto = rpo;
}

fink::fink(const fink& e) : abstr_emp(e)
{
	reportsto = e.reportsto;
}

//void fink::ShowAll() const

void fink::ShowAll()
{

	abstr_emp::ShowAll();
	showUniqueValue();
}

void fink::SetAll()
{
	abstr_emp::SetAll();
	setUniqueValue();
}

highfink::highfink() : manager(), fink()
{
}

highfink::highfink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo, int ico)
	: abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo)
{
}

highfink::highfink(const fink& f, int ico)
	: manager(f, ico), fink(f)
{
}

highfink::highfink(const manager& m, const std::string& rpo)
	: abstr_emp(m), manager(m), fink(m, rpo)
{
}

highfink::highfink(const highfink& h)
	: abstr_emp(h), manager(h), fink(h)
{
}

//void highfink::ShowAll() const
void highfink::ShowAll()
{
	abstr_emp::ShowAll();
	manager::showUniqueValue();
	fink::showUniqueValue();
}

void highfink::SetAll()
{

	abstr_emp::SetAll();
	manager::setUniqueValue();
	fink::setUniqueValue();

}
