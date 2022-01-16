#ifndef POKERPLAYER_H_
#define POKERPLAYER_H_

#include "Person.h"

class PokerPlayer: public Person{
public: 
	PokerPlayer();
	PokerPlayer(std::string name, std::string secondName);
	void Show() override;
	void Data();
	int Draw();
};
#endif // !POKERPLAYER_H_
