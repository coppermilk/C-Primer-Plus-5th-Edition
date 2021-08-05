#include <iostream>

using namespace std;

double harmonic_men(void);

int main() {
        harmonic_men();
        return 0;
}

double harmonic_men(void) {
        // trash initialization
        double first_num = 1;
        // trash initialization
        double second_num = 1;
        double harmonic_men;
        int is_end = 0;

        while (!is_end) {
                cout << "Enter two numbers: ";
                cin >> first_num >> second_num;

                if (first_num == 0 || second_num == 0) {
                        is_end = 1;
                        break;
                } else {
                        harmonic_men =
                                (2.0 * first_num * second_num) / (first_num + second_num);
                        cout << "Harmonic men = " << harmonic_men << endl;
                }
        }
        return 0;
}
