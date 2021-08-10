#include <iostream>

using namespace std;

double * fill_array(double * a, int size);
void show_array(double * a, double * end);
void revalue(double r, double * ar, double * end);

const int array_size = 32;
int main() {

        double my_array[array_size];

        double * p_fill_array = fill_array(my_array, array_size);
        show_array(my_array, p_fill_array);

        cout << "Enter revaluation factor: ";
        double factor;
        cin >> factor;
        revalue(factor, my_array, p_fill_array);
        show_array(my_array, p_fill_array);

        return 0;
}

double * fill_array(double * ar, int limit) {
        double temp;
        int i;
        for (i = 0; i < limit; i++) {
                cout << "Enter value #" << (i + 1) << ": ";
                cin >> temp;
                if (!cin) // bad input
                {
                        cin.clear();
                        while (cin.get() != '\n')
                                continue;
                        cout << "Bad input; input process terminated.\n";
                        break;
                } else if (temp < 0) // signal to terminate
                        break;
                *(ar + i) = temp;
        }
        return (ar + i);

}

void show_array(double * a, double * end) {

        const double * temp = a;
        for (int i = 0; temp < end; i++, temp++) {

                cout << "Property #" << (i + 1) << ": $";
                cout << * temp << endl;
        }
}

// multiplies each element of ar[] by r
void revalue(double r, double * ar, double * end) {
        double * temp = ar;
        for (int i = 0; temp < end; i++, temp++)
                *
                temp *= r;
}
