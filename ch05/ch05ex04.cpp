#include <iostream>

using namespace std;

int main() {
        const int number_of_month = 12;
        const char * month[number_of_month] = {
                "Jan",
                "Feb",
                "Mar",
                "Apr",
                "May",
                "June",
                "July",
                "Aug",
                "Sept",
                "Oct",
                "Nov",
                "Dec"
        };

        int sales_volume_by_month[number_of_month];
        int sum_sales_amount = 0;

        for (int i = 0; i < number_of_month; i++) {
                cout << "Enter sales volume in " << month[i] << ": ";
                cin >> sales_volume_by_month[i];

        }
        // could be recorded in the previous cycle
        for (int i = 0; i < number_of_month; i++) {
                sum_sales_amount += sales_volume_by_month[i];
        }

        cout << "Final sales: " << sum_sales_amount << " pcs." << endl;
        return 0;
}
