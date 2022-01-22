#include <iostream>
#include <string>
#include <vector>

const int NUM = 3;

int main()
{
	using std::vector;
	using std::string;
	using std::cin;
	using std::cout;
		using std::endl;
		vector<int> ratings(NUM);
		vector <string> titles(NUM);
		cout << "You must do exactly what is described about You must enter \n"
			<< NUM << "book titles and ratings (0 -10) about \n";
		int i;
		for (i = 0; i < NUM; i++) {
			cout << "Input book titles #" << i + 1 << ": ";
			getline(cin, titles[i]);
			cout << "Input raiting (0-10) : ";
			cin >> ratings[i];
			cin.get();

		}
		cout << "Thank. Yo input next information:\n"
			<< "Raiting \tBook\n";
		for (i = 0; i < NUM; i++) {
			cout << ratings[i] << "\t" << titles[i] << endl;
		}
	return 0;
}
