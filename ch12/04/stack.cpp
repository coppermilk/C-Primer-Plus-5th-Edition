#include "stack.h"
//stack.срр -- функции-члены класса Stack 
//#include "stdafx.h" --- Visual Studio --- precompiled headers
#include <iostream>
#include "stack.h" 

//-------------------------------------------------------------------------------------------------
Stack::Stack() // создание пустого стека 
{
	top = 0;
}
Stack::Stack(const Stack& s)
{
	this->top = s.top;
	for (int i = 0; i < MAX; i++) {
		this->items[i] = s.items[i];
	}
}
//-------------------------------------------------------------------------------------------------
bool Stack::isempty() const
{
	return top == 0;
}
//-------------------------------------------------------------------------------------------------
bool Stack::isfull() const
{
	return top == MAX;
}
//-------------------------------------------------------------------------------------------------
bool Stack::push(const Item& item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}
//-------------------------------------------------------------------------------------------------
bool Stack::pop(Item& item)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	else
		return false;
}

Stack& Stack::operator=(const Stack& st)
{
	this->top = st.top;
	for (int i = 0; i < MAX; i++) {
		this->items[i] = st.items[i];
	}
}

//to do
//std::ostream& operator<<(std::ostream& os, const Stack& st)
//{
//	for (int i = 0; i < st.top; i++)
//	{
//		os << "item " << i + 1 << ": " << st.items[i] << std::endl;
//	}
//	return os;
//}
