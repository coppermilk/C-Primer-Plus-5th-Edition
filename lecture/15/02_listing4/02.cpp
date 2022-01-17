#include <iostream>
#include "tv.h"

int main()
{
	using std::cout;
	Tv s27;
	cout << "Factory settings\n";
	s27.settings();
	s27.onoff();
	s27.chanup();
	cout << "\nCanged setting TV with 27 diagonal\n";
	s27.settings();
	Remote gray;
	gray.set_chan(s27, 10);
	gray.volup(s27);
	gray.volup(s27);
	cout << "\nChanged setting TV with 27 diagonal\n";
	s27.settings();
	Tv s32(Tv::On);
	s32.set_mode();
	gray.set_chan(s32, 28);
	cout << "\nChanged setting TV with 27 diagonal\n";
	s32.settings();

   }
