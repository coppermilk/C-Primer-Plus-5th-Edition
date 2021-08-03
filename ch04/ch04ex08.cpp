#include <iostream>

using namespace std;

struct pizza {
        char vendor[80];
        float diameter;
        float weight;
};

int main() {
        pizza * first_pizza = new pizza;
        cout << "Enter pizza vendor: ";
        cin.getline(first_pizza -> vendor, 80);
        cout << "Enter pizza diameter: ";
        cin >> first_pizza -> diameter;
        cout << "Enter pizza weight: ";
        cin >> first_pizza -> weight;

        cout << endl;
        cout << "Vendor: " << first_pizza -> vendor << endl;
        cout << "Diameter: " << first_pizza -> diameter << endl;
        cout << "Weight: " << first_pizza -> weight << endl;
        delete first_pizza;
        return 0;
}
