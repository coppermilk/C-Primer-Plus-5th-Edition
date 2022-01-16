#include "Gunslinger.h"

Gunslinger::Gunslinger(): Person()
{
	numberNotches = 0;
	timeReaction = 0;
}

Gunslinger::Gunslinger(double timeReaction, int numberNotches) : Person()
{
	this->timeReaction = timeReaction;
	this->numberNotches = numberNotches;
}

Gunslinger::Gunslinger(double timeReaction, int numberNotches, std::string name, std::string secondName) : Person (name, secondName)
{
	this->timeReaction = timeReaction;
	this->numberNotches = numberNotches;
}

void Gunslinger::Show()
{
	Person::Show();
	Data();

}

void Gunslinger::Data()
{
	std::cout << "Time of reaction: " << timeReaction << std::endl;
	std::cout << "Number of notches: " << numberNotches << std::endl;
}

double Gunslinger::Draw()
{
    return timeReaction;
}
