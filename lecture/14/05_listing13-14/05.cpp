#include <iostream>
#include <string>
#include <cctype>

#include "stacktp.h"

using std::cin;
using std::cout;

int main()
{
	Stack<std::string> st;
	char ch;
	std::string po;

	cout << "Please input A for add new offer,\n"
		<< "P - for prcessing offer, Q - for exit.\n";
	while ( cin >> ch && std::toupper(ch) != 'Q') {
		while (cin.get() != '\n') {
			continue;
		}
		if (!std::isalpha(ch)) {
			cout << '\a';
			continue;
		}

		switch (ch) {
		case 'A':
		case 'a':
			cout << "Input number offer for add: ";
			cin >> po;
			if (st.isfull()) {
				cout << "Stack is full\n";
			}
			else {
				st.push(po);
			}
			break;
		case 'P':
		case 'p':
			if (st.isempty()) {
				cout << "Stack is full before\n";
			}
			else {
				st.pop(po);
				cout << "Offer #" << po << " if pop\n";
				break;
			}
		}
		cout << "Please input A for add new offer,\n"
			<< "P - for prcessing offer, Q - for exit.\n";

	}
	

}
