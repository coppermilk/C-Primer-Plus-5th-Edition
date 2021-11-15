#include <iostream>
#include "stonewt.h"

using std::cout;
int main()
{
	Stonewt wolfe(285.7, 's'); 
	Stonewt taft(21, 8, 'f');
	cout << wolfe + taft;
	cout << wolfe;
	cout << taft;
	std::cin.get();
	std::cin.get();
	return 0;
}
