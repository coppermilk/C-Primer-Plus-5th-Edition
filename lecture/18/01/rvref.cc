#include <iostream>

inline double f(double tf) {
        return 5.0 * (tf - 32.0) / 9.0;
}
using namespace std;

int main() {
        double tc = 21.5;
        double && rd1 = 7.07;
        double && rd2 = 1.8 * tc + 32.0;
        double && rd3 = f(rd2);

        cout << " tc value and addresss: " << tc << ", " << & tc << endl;
        cout << "rd1 value and addresss: " << rd1 << ", " << & rd1 << endl;
        cout << "rd2 value and addresss: " << rd2 << ", " << & rd2 << endl;
        cout << "rd3 value and addresss: " << rd3 << ", " << & rd3 << endl;
        return 0;
}
