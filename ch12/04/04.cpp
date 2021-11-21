//stacker.срр -- тестирование класса Stack 
//#include "stdafx.h" --- Visual Studio --- precompiled headers
#include <iostream> 
#include <cctype> // или ctype.h 
#include "stack.h"

//-------------------------------------------------------------------------------------------------
int main()
{
	using namespace std;
	Stack st; // создание пустого стека 
	char ch;
	unsigned long po;
	// A - добавление заказа, – - обработка заказа, Q - завершение 
	cout << "Please enter A to add a purchase order,\n"
		<< "P to process a PO, or Q to quit.\n";
	while (cin >> ch && toupper(ch) != 'Q')
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		case 'A':
		case 'a': cout << "Enter a PO number to add: "; // запрос номера заказа 
			cin >> po;
			if (st.isfull())
				cout << "stack already full\n"; // стек уже полон 
			else
				st.push(po);
			break;
		case 'P':
		case 'p': if (st.isempty())
			cout << "stack already empty\n"; // стек уже пуст 
				else {
			st.pop(po);
			cout << "PO #" << po << " popped\n"; // заказ вытолкнут 
		}
				break;
		}
		cout << "Please enter A to add a purchase order,\n"
			<< "P to process a PO, or Q to quit.\n";
	}
	cout << "Bye\n";

	std::cin.get();
	std::cin.get();
	return 0;
}
