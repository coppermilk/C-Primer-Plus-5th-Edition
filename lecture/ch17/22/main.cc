#include <iostream>	//для большинства систем не требуется 
#include <sstream>
#include <string>

int main()
{
	using namespace std;
	string lit = "It was a dark a ttormy day, and the full mon glowed brilliantly. ";
	istringstream instr(lit);
	string word;
	while (instr >> word) {
		cout << word << endl;
	}
	return 0;
}
