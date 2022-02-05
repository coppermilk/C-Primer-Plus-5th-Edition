#include <iostream>
int main() {
	using std::cout;
	
	using namespace std;
	cout << "Input number: ";
	int n;
	//cin >> n;
	n = 13;
	cout << "n n*n\n";
	cout << n << " " << n * n << " (decimal)\n";
	cout << hex;
		cout << "n n*n\n";
	cout << n << " " << n * n << " (hexdecimal)\n";

	cout << oct;
	cout << "n n*n\n";
	cout << n << " " << n * n << " (octdecimal)\n";

	dec(cout);
	cout << "n n*n\n";
	cout << n << " " << n * n << " (decimal)\n";
	return 0;
	
}
