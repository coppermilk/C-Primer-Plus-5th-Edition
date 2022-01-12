#include "worker0.h"
#include <iostream>
using std::cout;
using std::cin; 
using std::endl;


// Methods Worker
// protected methods

Worker::~Worker() {}
void Worker::Data() const {
	cout << "Name: " << fullname << endl;
	cout << "ID: "<< id << endl;
}

void Worker::Get() {
	getline(cin, fullname);
	cout << "Input worker ID: ";
	cin >> id;
	while (cin.get() != '\n') {
		continue;
	}
}
void Worker::Set() {
	cout << "Input name and second name worker: ";
	Worker::Get();
	Get();
}

void Worker::Show() const {
	cout << "Type: waiter\n";
	Worker::Data();
	Data();
}

// Methods Waiter
// Protected methods
void Waiter::Data() const {
	cout << "Index panache: " << panache << endl;
}

void Waiter::Get() {
	cout << "Input index panache: ";
	cin >> panache;
	while (cin.get() != '\n') {
		continue;
	}
}
void Waiter::Set() {
	cout << "Input firstname and second name waiter: ";
	Worker::Get();
	Get();
}

void Waiter::Show() const {
	cout << "Type waiter\n";
	Worker::Data();
	Data();
}

// Ìועמהû Singer 
const char* Singer::pv[Singer::Vtypes] = { "other", "alto", "contralto","soprano", "bass", "baritone", "tenor" };
void Singer::Set() {
	cout << "Input firstname and secondname singer: ";
	Worker::Get();
	Get();
}


void Singer::Show() const {
	cout << "Category: singer\n";
		Worker::Data();
		Data();
}

void Singer::Data() const {
	cout << "Vocal type: " << pv[voice] << endl;
}

void Singer::Get() {
	cout << "Input vocal number: ";
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
	cin >> voice;
	while (cin.get() != '\n') {
		continue;
	}
}

//Methods SingerWaiter

void SingingWaiter::Data() const {
	Singer::Data();
	Waiter::Data();
}

void SingingWaiter::Get() {
	Waiter::Get();
	Singer::Get();
}

void SingingWaiter::Set() {
	cout << "Intup name singing waiter: ";
	Worker::Get();
	Get();
}

void SingingWaiter::Show() const {
	cout << "Type: singing waiter\n";
	Worker::Data();
	Data();
}
