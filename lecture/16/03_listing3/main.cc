#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <cctype>
using std::string;
const int NUM = 26;
const string wordlist[NUM] = { "apiary", "beetle", "cereal",
"danger", "ensign", "florid", "garage", "health", "insult",
"jackal", "keper", "loaner", "manage", "nonce", "onset",
"plaid", "qult", "remote", "stolid", "train", "useful",
"vadil", "whence", "xenon", "yearn", "zipply" };


int main()
{
	using std::cout;
	using std::cin;
	using std::tolower;
	using std::endl;
	std::srand(std::time(0));
	char play;
	cout << "Let's play in word? <y/n> ";
	cin >> play;
	play = tolower(play);
	while (play == 'y') {
		string target = wordlist[std::rand() % NUM];
		int length = target.length();
		string attempt(length, '-');
		string badhchars;
		int guesses = 6;

		cout << "Secret wors is contein " << length << " letters,"
			<< "and you can chose "
			<< "one letter at one time.\n"
			<< "and you can " << guesses << " incorrect times.\n";
		cout << "Your words: " << attempt << endl;

		while (guesses > 0 && attempt != target) {
			char letter;
			cout << "Chose letter: ";
			cin >> letter;
			if (badhchars.find(letter) != string::npos ||
				attempt.find(letter) != string::npos)
			{
				cout << "You already chose. Try attemp.\n";
				continue;
			}
			int loc = target.find(letter);
			if (loc == string::npos) {
				cout << "Incorect!\n";
				--guesses;
				badhchars += letter;
			}
			else {
				cout << "Good!\n";
				attempt[loc] = letter;
				loc = target.find(letter, loc + 1);
				while (loc != string::npos) {
					attempt[loc] = letter;
					loc = target.find(letter, loc + 1);
				}
			}
			cout << "Your word: " << attempt << endl;
			if (attempt != target) {
				if (badhchars.length() > 0) {
					cout << "Incorect chose: " << badhchars << endl;
					cout << guesses << " incorect variansts" << endl;
				}
			}
			if (guesses > 0) {
				cout << "You win!!!\n";
			}
			else {
				cout << "Target word was: " << target << endl;
				cout << "Play again: <y/n> ";
				cin >> play;
			}
		}
		cout << "Done!";
	}
	return 0;
}
