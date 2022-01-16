#include "Person.h"

void Person::Show()
{
	Data();
}

void Person::Data()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Second Name: " << secondName << std::endl;
}

Person::Person(std::string name, std::string secondName)
{
	this->name = name;
	this->secondName = secondName;
}
