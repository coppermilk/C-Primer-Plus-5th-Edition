#include <iostream>
#include <cstring>

#include "cow.h"

#pragma warning(disable : 4996) // use strcpy() & strncpy()

Cow::Cow()
{
	std::cout << "->Cow() is run" << std::endl;

	const char* default_name = "No Name";
	const char* default_hobby = "No Hobby";
	
	strncpy(name, default_name, 20);
	hobby = new char[strlen(default_hobby) + 1];
	strcpy(hobby, default_hobby);
	weight = 0.0;
}

Cow::Cow(const char* nm, const char* ho, double wt)
{
	std::cout << "->Cow(const char* nm, const char* ho, double wt) is run" << std::endl;
	
	strncpy(name, nm, 20);
	hobby = new char[strlen(ho) + 1];
	strcpy(hobby, ho);
	weight = wt;
}

Cow::Cow(const Cow& c)
{
	std::cout << "->Cow(const Cow& c) is run" << std::endl;

	strncpy(name, c.name, 20);
	hobby = new char[strlen(c.hobby) + 1];
	strcpy(hobby, c.hobby);
	weight = c.weight;
	
}

Cow::~Cow()
{
	std::cout << this <<"->~Cow() is run" << std::endl;

	delete[] hobby;
}

Cow& Cow::operator=(const Cow& c)
{

	if (&c == this) {
		return *this;
	}
	else {
		strncpy(name, c.name, 20);
		delete[] hobby;
		hobby = new char[strlen(c.hobby) + 1];
		strcpy(hobby, c.hobby);
		weight = c.weight;

		return *this;
	}
}

void Cow::ShowCow() const
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Hobby: " << hobby << std::endl;
	std::cout << "Weight: " << weight << std::endl;
}
