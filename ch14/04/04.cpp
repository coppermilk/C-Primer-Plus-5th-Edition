#include <iostream>

#include "Person.h"
#include "Gunslinger.h"
#include "BadDude.h"

int main()
{
	Person p("Maestro", "Ponasekow");
	PokerPlayer pp("True", "Player");
	Gunslinger g(1.0, 3, "Danger", "Dragon");

	BadDude b(2.0, 8.3, 9, "Bad", "Puppy");
	BadDude zero;

	PokerPlayer* p_b = &b;
	PokerPlayer* p_zero = &zero;

	Person* array[] = { &p, &pp, &g, p_b, p_zero };
	
	for (int i = 0; i < 5; i++) {
		std::cout << "#" << i << " ____________" << std::endl;
		array[i]->Show();
		std::cout << std::endl;
	}

}

