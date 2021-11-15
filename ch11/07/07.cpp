// 07.cpp
#include <iostream>
#include "Complex0.h"

int main()
{
	Complex a(3.0, 4.0); // initialization (3,4і) 
	Complex c;

	std::cout << "Enter a complex number (q to quit) :\n";
	while (std::cin >> c)
	{
		std::cout << "c is " << c << '\n'; // c is

		std::cout << "complex conjugate is " << ~c << '\n';
		std::cout << "a is " << a << '\n';
		std::cout << "a + c is " << a + c << '\n'; // а + с
		std::cout << "a - c is " << a - c << '\n'; // а — с 
		std::cout << "a * c is " << a * c << '\n'; // а * с 
		std::cout << "2 * c is " << 2 * c << '\n'; // 2 * с 
		std::cout << "c * 2 is " << c * 2 << '\n'; // c * c

		std::cout << "Enter a complex number (q to quit) :\n"; 
	}
  
	std::cout << "Done!\n";

	std::cin.get();
	std::cin.get();
	return 0;
}
