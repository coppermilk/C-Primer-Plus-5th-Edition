#include <iostream>

using namespace std;
int main() {
        const int FEET_IN_INCHES = 12;
        int inches;
        cout << "Enter the height in inches __\b\b";
        cin >> inches;
        cout << "Height is: " << int(inches / FEET_IN_INCHES) <<
                " feet(s) " << inches % FEET_IN_INCHES << " inche(s)" << endl;

        return 0;
}
