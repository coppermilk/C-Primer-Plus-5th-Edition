#include "PokerPlayer.h"

PokerPlayer::PokerPlayer() : Person()
{
}

PokerPlayer::PokerPlayer(std::string name, std::string secondName) 
	: Person(name, secondName)
{
}

void PokerPlayer::Show()
{
	Person::Show();
}

void PokerPlayer::Data()
{
}

int PokerPlayer::Draw()
{
    return rand() % 53;
}
