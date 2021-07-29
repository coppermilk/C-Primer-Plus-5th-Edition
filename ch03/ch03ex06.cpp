#include <iostream>

using namespace std;

int main() {
        const float miles_in_100_kilometers = 62.14;
        const float litters_in_gallon = 3.875;

        float liters_per_100_kilometers, miles_per_gallon;

        cout << "Enter consumption of liters per 100 kilometers: ";
        cin >> liters_per_100_kilometers;

        miles_per_gallon =
                (miles_in_100_kilometers / liters_per_100_kilometers) * litters_in_gallon;
        cout << int(miles_per_gallon) << " miles per gallon";

        return 0;
}
