#include "Stack.h"
#include <iostream>
Stack::Stack()
{
	index = 0;
}

bool Stack::isEmpty()
{
	return index == 0;
}

bool Stack::isFull()
{
	return LIMIT == index;
}

bool Stack::pop(Items& item)
{
	if (index > 0) {
		item = items[--index];
		return true;
	}
	else {
		return false;
	}
}

bool Stack::push(Items& item)
{
	if (index < LIMIT) {
		items[index++] = item;
		return true;
	}
	else {
		return false;
	}
}

void Stack::printSTack()
{
	for (int i = 0; i < index; i++) {
		std::cout << "#" << i << std::endl;
		std::cout << "Name: " << items[i].fullname << std::endl;
		std::cout << "Payment: " << items[i].payment << std::endl;

	}
}
