#include "BadDude.h"

BadDude::BadDude() : Gunslinger(),  PokerPlayer()
{
	paintingTime = 0.0;
}

BadDude::BadDude(double paintingTime, double timeReaction,
	int numberNotches, std::string name, std::string secondName) 
	: Gunslinger (timeReaction, numberNotches, name, secondName), 
	PokerPlayer(name, secondName)
{
	this->paintingTime = paintingTime;
}

void BadDude::Show()
{
	Person::Data();
	PokerPlayer::Data();
	Gunslinger::Data();

}

double BadDude::Cdraw()
{
	return PokerPlayer::Draw();
}

double BadDude::Gdraw()
{
	return Gunslinger::Draw();
}


