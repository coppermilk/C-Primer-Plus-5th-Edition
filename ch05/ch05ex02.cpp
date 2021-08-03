#include <iostream>

using namespace std;

int main() {
        int number;
        int sum = 0;

        while (1) {
                cout << "Enter number: ";
                cin >> number;
                sum += number;
                cout << "Sum: " << sum << endl;
                if (number == 0) {
                        break;
                }
        }
        
        cout << "Done!" << endl;
        return 0;
}
