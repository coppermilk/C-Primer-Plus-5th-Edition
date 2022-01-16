#ifndef PERSON_H_
#define PERSON_H_

#include <string>
#include <iostream>

class Person
{
public: 
	virtual void Show();
	void Data();
	Person(std::string name = "null", std::string secondName = "null");
private:
	std::string name;
	std::string secondName;
};
#endif //PERSON_H_
