#include <iostream>

using namespace std;
int main() {
        float kilometers, liters;
        float liters_per_kilometer;

        cout << "Enter the number of kilometers: ";
        cin >> kilometers;
        cout << "Enter the number of liters: ";
        cin >> liters;

        liters_per_kilometer = liters / kilometers;

        cout << "Consumption of liters per kilometer: " <<
                liters_per_kilometer << endl;
        return 0;
}
