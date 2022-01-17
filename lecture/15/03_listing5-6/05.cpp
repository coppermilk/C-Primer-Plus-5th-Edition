#include <iostream>
#include <string>
#include "queuetp.h"

int main()
{
	using std::string;
	using std::cin;
	using std::cout;
	QueueTP<string> cs(5);
	string temp;
	while (!cs.isfull()) {
		cout << "Please, input name and second name. You will be processing in queue.\n Name & Second name: ";
		getline(cin, temp);
		cs.enqueue(temp);
	}
	cout << "Queue is full. Start processing...\n";
	while (!cs.isempty()) {
		cs.dequeue(temp);
		cout << "Processing: " << temp << "...\n";
	}
	return 0;
}
