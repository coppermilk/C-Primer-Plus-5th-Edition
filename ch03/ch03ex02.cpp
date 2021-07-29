#include <iostream>

using namespace std;

int main() {
        const int FEET_IN_INCHES = 12;
        const double POUNDS_IN_KILOGRAMM = 2.2;
        const double INCHES_IN_METR = 0.0254;

        double feet, inches, pounds;

        double height_in_m;
        double weight_in_kg;

        cout << "Enter the height in feet and inches: ";
        cin >> feet;
        cin >> inches;
        cout << "Еnter the weight in pounds: ";
        cin >> pounds;

        height_in_m = (inches + (feet * FEET_IN_INCHES)) * INCHES_IN_METR;
        weight_in_kg = pounds / POUNDS_IN_KILOGRAMM;

        cout << "The body mass index is equal to: ";
        cout << weight_in_kg / (height_in_m * height_in_m);
        return 0;
}
