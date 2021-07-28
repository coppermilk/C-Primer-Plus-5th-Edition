#include <iostream>

using namespace std;

double celsius_to_fahrenheit(double temp);

int main() {
        double temp;
        cout << "Please enter a Celsius value: ";
        cin >> temp;
        cout << temp << " degrees Celsius is " << celsius_to_fahrenheit(temp) <<
                " degrees Fahrenheit.";

        return 0;
}

double celsius_to_fahrenheit(double temp) {
        return (1.8 * temp) + 32;
}
