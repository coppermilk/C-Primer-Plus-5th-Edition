// stonewt.срр 
#include <iostream>
#include "stonewt.h"

using std::cout;
//-------------------------------------------------------------------------------------------------
// Конструирует объект Stonewt из значения типа double 
Stonewt::Stonewt(double lbs)
{
	stone = int(lbs) / Lbs_per_stn; // целочисленное деление 
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}
//-------------------------------------------------------------------------------------------------
// Конструирует объект Stonewt из стоунов и значения типа double 
Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
}
//-------------------------------------------------------------------------------------------------
// конструктор по умолчанию, wt = 0 
Stonewt::Stonewt()
{
	stone = pounds = pds_left = 0;
}
//-------------------------------------------------------------------------------------------------
// деструктор
Stonewt::~Stonewt()
{

}
//-------------------------------------------------------------------------------------------------
// Отображение веса в стоунах 
void Stonewt::show_stn() const
{
	cout << stone << " stone, " << pds_left << " pounds\n";
}

bool Stonewt::operator==(const Stonewt& stn)
{
	return this->pounds== stn.pounds;
}

bool Stonewt::operator!=(const Stonewt& stn)
{
	return this->pounds != stn.pounds;
}

bool Stonewt::operator<(const Stonewt& stn)
{
	return this->pounds < stn.pounds;
}

bool Stonewt::operator>(const Stonewt& stn)
{
	return this->pounds > stn.pounds;
}

bool Stonewt::operator<=(const Stonewt& stn)
{
	return this->pounds <= stn.pounds;
}

bool Stonewt::operator>=(const Stonewt& stn)
{
	return this->pounds >= stn.pounds;
}


//-------------------------------------------------------------------------------------------------
// Отображение веса в фунтах 
void Stonewt::show_lbs() const
{
	cout << pounds << " pounds\n";
}
//-------------------------------------------------------------------------------------------------
