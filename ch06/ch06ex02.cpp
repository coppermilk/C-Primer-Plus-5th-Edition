#include <iostream>

using namespace std;
int main() {
        const int number_of_donations = 3;

        double donations[number_of_donations] = {
                0
        };
        double average_donation = 0;
        double sum_donation = 0;
        int count_bigger_average = 0;

        int i = 0;
        while (i < number_of_donations && cin.good()) {
                cout << "Enter donation values: ";
                cin >> donations[i];
                i++;

        }

        for (int j = 0; j < i; j++) {
                sum_donation += donations[j];
        }

        average_donation = sum_donation / i;
        cout << "Average donation: " << average_donation << endl;

        for (int j = 0; j < i; j++) {
                if (average_donation > donations[j]) {
                        count_bigger_average++;
                }
        }

        cout << "Count bigger average donation: " << count_bigger_average;

        return 0;
}
