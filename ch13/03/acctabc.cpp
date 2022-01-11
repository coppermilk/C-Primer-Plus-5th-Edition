//dma.cpp � ������ ������� � ������������ ���������� ������ 
//#include "stdafx.h" --- Visual Studio --- precompiled headers
#include <iostream>
#include <cstring>
#include "acctabc.h"

#pragma warning(disable : 4996)
//-------------------------------------------------------------------------------------------------
// ������ ABC 
ABC::ABC(const char* l, int r)
{
	label = new char[std::strlen(l) + 1];
	std::strcpy(label, l);
	rating = r;
}
//-------------------------------------------------------------------------------------------------
ABC::ABC(const ABC& rs)
{
	label = new char[std::strlen(rs.label) + 1];
	std::strcpy(label, rs.label);
	rating = rs.rating;
}
//-------------------------------------------------------------------------------------------------
ABC::~ABC()
{
	delete[] label;
}
void ABC::view()
{
}
//-------------------------------------------------------------------------------------------------
ABC& ABC::operator=(const ABC& rs)
{
	if (this == &rs)
		return *this;
	delete[] label;
	label = new char[std::strlen(rs.label) + 1];
	std::strcpy(label, rs.label);
	rating = rs.rating;
	return *this;
}
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
// ������ lacksDMA 
lacksDMA::lacksDMA(const char* c, const char* l, int r)
	: ABC(l, r)
{
	std::strncpy(color, c, 39);
	color[39] = '\0';
}
//-------------------------------------------------------------------------------------------------
lacksDMA::lacksDMA(const char* c, const ABC& rs) : ABC(rs)
{
	std::strncpy(color, c, COL_LEN - 1);
	color[COL_LEN - 1] = ' \0 ';
}

std::ostream& operator<<(std::ostream& os, ABC& rs)
{
	os << rs.label << std::endl;
	os << rs.rating << std::endl;
	return os;
}

//-------------------------------------------------------------------------------------------------
std::ostream& operator<< (std::ostream& os, const lacksDMA& Is)
{
	os << (ABC&)Is;
	os << "Color: " << Is.color << std::endl; // ���� 
	return os;
}
//-------------------------------------------------------------------------------------------------
// ������ hasDMA 
hasDMA::hasDMA(const char* s, const char* l, int r)
	: ABC(l, r)
{
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}
//-------------------------------------------------------------------------------------------------
hasDMA::hasDMA(const char* s, const ABC& rs)
	: ABC(rs)
{
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}
//-------------------------------------------------------------------------------------------------
hasDMA::hasDMA(const hasDMA& hs)
	: ABC(hs) // �������� ����������� ����������� �������� ������ 
{
	style = new char[std::strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
}
//-------------------------------------------------------------------------------------------------
hasDMA::~hasDMA()
{
	delete[] style;
}
//-------------------------------------------------------------------------------------------------
hasDMA& hasDMA::operator=(const hasDMA& hs)
{
	if (this == &hs)
		return *this;
	ABC::operator=(hs); // ����������� ������� ����� 
	delete[] style; // ���������� � �������� new ��� style 
	style = new char[std::strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
	return *this;
}

//-------------------------------------------------------------------------------------------------
std::ostream& operator<<(std::ostream& os, const hasDMA& hs)
{
	os << (ABC&)hs;
	os << "Style: " << hs.style << std::endl; // ����� 
	return os;
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

baseDMA::baseDMA(const char* l, int r) : ABC(l, r)
{
}

baseDMA::baseDMA(const baseDMA& rs) : ABC(rs)
{
}


void baseDMA::view()
{
	std::cout << getLabel() << std::endl;
	std::cout << getRating() << std::endl;
}

void lacksDMA::view()
{
	std::cout << getLabel() << std::endl;
	std::cout << getRating() << std::endl;
	std::cout << color << std::endl;
	
}

void hasDMA::view()
{
	std::cout << getLabel() << std::endl;
	std::cout << getRating() << std::endl;
	std::cout << style << std::endl;
}