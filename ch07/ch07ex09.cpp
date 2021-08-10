#include <iostream>

const int FUNCTIONS = 3;
using namespace std;

void calculate(double x, double y, double( * pf[])(double a, double b), int lenght);
double add(double x, double y);
double multiply(double x, double y);
double substract(double x, double y);

int main() {
        double x, y;
        double( * pf[FUNCTIONS])(double, double) = {
                add,
                multiply,
                substract
        };
        cout << "enter two number or q for qutit: ";
        while (cin >> x >> y) {
                cout << "The sum, product, and difference are as follows: ";
                calculate(x, y, pf, FUNCTIONS);
                cout << endl;
                cout << "Enter another two numbers (q to quit): ";
        }
        return 0;
}

void calculate(double x, double y, double( * pf[])(double a, double b), int lenght) {
        for (int i = 0; i < lenght; i++) {
                cout << endl;
                cout << ( * pf[i])(x, y) << " ";
        }
}

double add(double x, double y) {
        return x + y;
}

double multiply(double x, double y) {
        return x * y;
}

double substract(double x, double y) {
        return x / y;
}
