#include <iostream>

using namespace std;
int main() {
        const int THE_BASIS_OF_THE_NUBBERING_SYSTEM = 60;

        int degrees, minutes, seconds;
        double latitude_in_decimal_form;

        cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
        cout << "First, enter the degrees: ";
        cin >> degrees;

        cout << "Next, enter the minutes of arc: ";
        cin >> minutes;

        cout << "Finaly, enter  the seconds of arc: ";
        cin >> seconds;

        latitude_in_decimal_form =
                (((double(seconds) / THE_BASIS_OF_THE_NUBBERING_SYSTEM) +
                        double(minutes)) / THE_BASIS_OF_THE_NUBBERING_SYSTEM) + degrees;

        cout << degrees << " degrees, " << minutes << " minutes, " << seconds <<
                " seconds = " << latitude_in_decimal_form;

        return 0;
}
