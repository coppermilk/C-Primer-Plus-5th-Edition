#include <iostream>
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <iterator>
#include <algorithm>
#include <cctype>
#include <vector>

using namespace std;

char toLower(char ch) { return tolower(ch); }
string& ToLower(std::string& st);
void display(const std::string& s);


int main()
{
	vector<string> words;
	cout << "Enter words ( quit to finish ): \n";
	string input;
	while (cin >> input && input != "quit") {
		words.push_back(input);
	}

	 cout << "You entered the following words : \n";
	 for_each(words.begin(), words.end(), display);
	 cout << endl;
	 
	 // put words into set by converting to lower case
	 set<string> wordset;
	 transform(words.begin(), words.end(), insert_iterator<set<string>>(wordset, wordset.begin())
		 , ToLower);
	 cout << "\nAlphabetical list of words: \n ";
	 for_each(wordset.begin(), wordset.end(), display);
	 cout << endl;

	 // put words and frequencies in the map
	 map<string, int> wordmap;
	 set<string>::iterator si;
	 for (si = wordset.begin(); si != wordset.end(); si++) {
		 wordmap[*si] = count(words.begin(), words.end(), *si);
	 }
	 // display the contents of the map
	 cout << "\nWord frequency:\n";
	 for (si = wordset.begin(); si != wordset.end(); si++) {
		 cout << *si << ": " << wordmap[*si] << endl;
	 }
	 return 0;
}

string& ToLower(std::string& st)
{
	transform(st.begin(), st.end(), st.begin(), toLower);
	return st;
}

void display(const std::string& s)
{
	cout << s << " ";
}
