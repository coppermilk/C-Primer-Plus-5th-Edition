#include <iostream>
#include "acctabc.h" 

//-------------------------------------------------------------------------------------------------
int main()
{
	using std::cout;
	using std::endl;
	baseDMA shirt("Portabelly", 8);
	lacksDMA balloon("red", "Blimpo", 4);
	hasDMA map("Mercator", "Buffalo Keys", 5);
	cout << "Displaying baseDMA object:\n";		// отображение объекта baseDMA 
	cout << shirt << endl;
	cout << "Displaying lacksDMA object:\n";	// отображение объекта lacksDMA 
	cout << balloon << endl;
	cout << "Displaying hasDMA object:\n";		// отображение объекта hasDMA 
	cout << map << endl;
	lacksDMA balloon2(balloon);
	cout << "Result of lacksDMA copy:\n";		// результат копирования lacksDMA 
	cout << balloon2 << endl;
	hasDMA map2;
	map2 = map;
	cout << "Result of hasDMA assignment:\n";	// результат присваивания hasDMA 
	cout << map2 << endl;

	//std::cin.get();
	//std::cin.get();

	std::cout << std::endl << std::endl;
	shirt.view();
	const int COUNT_CLASS = 3;
	ABC* p_array[COUNT_CLASS] = {&shirt, &balloon, &map};
	for (int i = 0; i < COUNT_CLASS; i++) {
		p_array[i]->view();
		std::cout << "_______" << std::endl;
	}


	return 0;
}
