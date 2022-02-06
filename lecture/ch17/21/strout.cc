#include <iostream>	//для большинства систем не требуется 
#include <sstream>
#include <string>

int main()
{
	using namespace std;
	ostringstream outstr;
	string hdisk;
	cout << "What's name of yur hard hisk? ";
	getline(cin, hdisk);
	int cap;
	cout << "What's its capacity in GB? ";
	cin >> cap;
	outstr << "The hard hisk " << hdisk << " has a capacity of "
		<< cap << " gigabytes.\n";
	string result = outstr.str();
	cout << result;
	return 0;
}
