#ifndef BADDUDE_H_
#define BADDUDE_H_

#include "Gunslinger.h"
#include "PokerPlayer.h"

class BadDude : public virtual Gunslinger, public virtual PokerPlayer
{
public:
	BadDude();
	BadDude(double paintingTime, double timeReaction, int numberNotches,
		std::string name, std::string secondName);
	void Show() override;
	double Cdraw();
	double Gdraw();
private:
	double paintingTime;
};
#endif // BADDUDE_H_
