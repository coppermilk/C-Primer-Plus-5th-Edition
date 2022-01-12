#include "worker0.h"
#include <iostream>
using std::cout;
using std::cin; 
using std::endl;


// Methods Worker
Worker::~Worker() {}
void Worker::Set() {
	cout << "Input name and second name worker: ";
	getline(cin, fullname);
	cout << "Input ID worker: ";
	cin >> id;
	while (cin.get() != '\n')
	{

		continue;
	}
}

void Worker::Show() const {
	cout << "Name: " << fullname << endl;
	cout << "ID: " << id << endl;
}

// Methods Waiter
void Waiter::Set() {
	Worker::Set();
	cout << "Input index waiter panache: ";
	cin >> panache;
	while (cin.get() != '\n')
	{

		continue;
	}
}

void Waiter::Show() const {
	cout << "Type waiter\n";
	Worker::Show();
	cout << "Waiter index panache: " << panache << endl;

}

// Ìועמהû Singer 
const char* Singer::pv[Singer::Vtypes] = { "other", "alto", "contralto","soprano", "bass", "baritone", "tenor" };
void Singer::Set() {
	Worker::Set();
	cout << "Input singer vocal index\n";
	int i;
	for (i = 0; i < Vtypes; i++) {
		cout << i << ": " << pv[i] << " ";
		if (i % 4 == 3) {
			cout << endl;
		}
		
	}
	if (i % 4 != 0) {
		cout << endl;
	}
	while (cin.get() != '\n') {
		continue;
	}
}

void Singer::Show() const {
	cout << "Category: singer\n";
		Worker::Show();
	cout << "Vocal type: " << pv[voice] << endl;
}
