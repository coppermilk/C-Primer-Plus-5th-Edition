#include "Port.h"

#include <iostream>
#pragma warning(disable: 4996)



Port::Port(const char* brand, const char* style, int bottles)
{
	if (brand == nullptr) {
		this->brand = nullptr;
	}
	else {
		this->brand = new char[strlen(brand) + 1];
		strcpy(this->brand, brand);
	}

	std::strncpy(this->style, style, 20 - 1);
	this->style[20 - 1] = '\0';

	this->bottles = bottles;
}

Port::Port(const Port& p)
{
	if (p.brand == nullptr) {
		brand = nullptr;
	}
	else {
		brand = new char[strlen(p.brand) + 1];
		strcpy(brand, p.brand);
	}

	std::strncpy(style, p.style, 20 - 1);
	style[20 - 1] = '\0';

	bottles = p.bottles;
}

Port& Port::operator=(const Port& p)
{
	if (p.brand == nullptr) {
		brand = nullptr;
	}
	else {
		brand = new char[strlen(p.brand) + 1];
		strcpy(brand, p.brand);
	}

	std::strncpy(style, p.style, 20 - 1);
	style[20 - 1] = '\0';

	bottles = p.bottles;
	return *this;
}

Port& Port::operator+=(int b)
{
	bottles += b;
	return *this;
}


Port& Port::operator-=(int b)
{
	bottles -= b;

	return *this;
}

void Port::Show() const
{
	std::cout << "Brand: " << brand << std::endl;
	std::cout << "Kind: " << style << std::endl;
	std::cout << "Bottles: " << bottles << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Port& p)
{
	os << p.brand << ", " << p.style << ", " << p.bottles;
	return os;
}

std::ostream& operator<<(std::ostream& os, const VintagePort& vp)
{
	os << (const Port&)vp;
	os << ", " << vp.nickname << ", " << vp.year;
	return os;
}

VintagePort::VintagePort() : Port("none", "Vintage", 0)
{
	year = 0;
	nickname = nullptr;
}

VintagePort::VintagePort(const char* brand, int bottle, const char* nickname, int year) : Port(brand, "Vintage", bottle)
{
	if (nickname == nullptr) {
		this->nickname = nullptr;
	}
	else {
		this->nickname = new char[strlen(nickname) + 1];
		strcpy(this->nickname, nickname);
	}
	this->year = year;
}

VintagePort::VintagePort(const VintagePort& vp)
{
	if (vp.nickname == nullptr) {
		nickname = nullptr;
	}
	else {
		nickname = new char[strlen(vp.nickname) + 1];
		strcpy(nickname, vp.nickname);
	}
	year = vp.year;

}

VintagePort& VintagePort::operator=(const VintagePort& vp)
{
	if (vp.nickname == nullptr) {
		nickname = nullptr;
	}
	else {
		nickname = new char[strlen(vp.nickname) + 1];
		strcpy(nickname, vp.nickname);
	}
	year = vp.year;

	return *this;

}

void VintagePort::Show() const
{
	Port::Show();
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Year: " << year << std::endl;
}
