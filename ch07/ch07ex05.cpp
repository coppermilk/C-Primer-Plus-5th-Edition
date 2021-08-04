#include <iostream>

unsigned long factorial(int n);
using namespace std;

int main() {
        cout << "Enter number: ";
        int number;
        while (1) {

                cin >> number;
                if (!cin.good()) {
                        cout << "Done!";
                        break;
                } else {
                        cout << number << "! = " << factorial(number) << endl;
                        cout << "Enter number (q for exit): ";
                }

        }

        return 0;
}

unsigned long factorial(int n) {
        return (n == 0) ? 1 : n * factorial(n - 1);
}
