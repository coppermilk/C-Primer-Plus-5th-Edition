#include <iostream>
# include "mytime0.h"

Time::Time()
{
	hours = minutes = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}



void Time::AddMin(int m) {
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}

void Time::AddHr(int h) {
	hours += h;
}

void Time::Reset(int h, int m) {
	hours = h;
	minutes = m;
}

Time Time::Sum(const Time& t1, const Time& t2) {
	Time sum;
	sum.minutes = t1.minutes + t2.minutes;
	sum.hours = t1.hours + t2.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}

Time operator+(const Time& t1, const Time & t2)
{
	Time tmp;
	tmp.minutes = t1.minutes + t2.minutes;
	tmp.hours = t1.hours + t2.hours + tmp.minutes / 60;
	tmp.minutes %= 60;
	return tmp;

}

Time operator-(const Time& t1, const Time& t2)
{
	Time diff;
	int tol1, tol2;
	tol1 = t2.minutes + 60 * t2.hours;
	tol2 = t1.minutes + 60 * t1.hours;
	diff.minutes = (tol2 - tol1) % 60;
	diff.hours = (tol2 - tol1) / 60;
	return diff;

}

Time operator*(const Time& t1, double mult)
{
	Time result;
	long totalmites = t1.hours * mult * 60 + t1.minutes * mult;
	result.hours = totalmites / 60;
	result.minutes = totalmites % 60;
	return result;
}

void Time::Show() const {
	std::cout << hours << " hours, " << minutes << " minutes";
}





std::ostream& operator<<(std::ostream& os, const Time& t)
{
	os << t.hours << " hours, " << t.minutes << " minutes";
	return os;
}
