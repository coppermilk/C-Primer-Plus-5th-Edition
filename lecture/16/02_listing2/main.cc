#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>


int main()
{
	using namespace std;
	ifstream file;
	file.open("tobuy.txt");
	if (!file.is_open()) {
		cerr << "Cant read file. Exit\n";
		exit(EXIT_FAILURE);
	}
	string item;
	int count = 0;
	getline(file, item, ':');
	while (file) {
		++count;
		cout << count << ": " << item << endl;
		getline(file, item, ':');

	}
	cout << "Done!";
	file.close();

	return 0;
}
