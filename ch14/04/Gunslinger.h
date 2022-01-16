#ifndef GUNSLINGER_H_
#define GUNSLINGER_H_

#include "Person.h"

class Gunslinger : public Person {

public:
	Gunslinger();
	Gunslinger(double timeReaction, int numberNotches);
	Gunslinger(double timeReaction, int numberNotches, std::string name, std::string secondName);
	void Show() override;
	void Data();
	double Draw();
private:
	double timeReaction;
	int numberNotches;
};
#endif // !GUNSLINGER_H_



