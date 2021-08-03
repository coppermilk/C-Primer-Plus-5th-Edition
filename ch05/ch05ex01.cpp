#include <iostream>

using namespace std;

int main() {
        int number_first, number_second;
        int sum = 0;
        cout << "Enter first integer number: ";
        cin >> number_first;
        cout << "Enter second number: ";
        cin >> number_second;
        
        for (int i = number_first; i <= number_second; i++) {
                sum += i;

        }
        cout << "Sum of integers between " <<
                number_first << " and " << number_second << " is " << sum;
        return 0;
}
