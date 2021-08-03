#include <iostream>

using namespace std;

struct car {

        string vendor;
        int production_year;
};

int main() {
        int cars_count;

        cout << "Enter count cars: ";
        (cin >> cars_count).get();;

        car cars[cars_count];
        
        for (int i = 0; i < cars_count; i++) {
                cout << "Cars #" << i + 1 << ":" << endl;
                cout << "Enter vendor: ";
                getline(cin, cars[i].vendor);

                cout << "Enter production year: ";
                (cin >> cars[i].production_year).get();;
        }
        cout << "Your collection: " << endl;
        
        for (int i = 0; i < cars_count; i++) {
                cout << cars[i].production_year << " ";
                cout << cars[i].vendor << endl;

        }

        return 0;
}
