// 06.cpp
#include <iostream>
#include "stonewt.h"

using std::cout;


int main()
{
	Stonewt wolfe(302); 
	Stonewt taft(21, 8);
  
	taft.show_stn();
	taft.show_lbs();
	cout << std::endl;
	
	cout << "taft == wolfe is " << (taft == wolfe ? "true" : "false") << std::endl;
	cout << "taft != wolfe is " << (taft != wolfe ? "true" : "false") << std::endl;
	cout << "taft <= wolfe is " << (taft <= wolfe ? "true" : "false") << std::endl;
	cout << "taft >= wolfe is " << (taft >= wolfe ? "true" : "false") << std::endl;
	cout << "taft < wolfe is " << (taft < wolfe ? "true" : "false") << std::endl;
	cout << "taft > wolfe is " << (taft > wolfe ? "true" : "false") << std::endl;
	
	std::cin.get();
	std::cin.get();

	return 0;
}
