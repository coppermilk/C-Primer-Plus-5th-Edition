#include <iostream>

using namespace std;

float power(float x, long n);
int main() {
        cout << "Year Dafna  Kleo" << endl;
        int deposit_1 = 100;
        int deposit_2 = 100;
        float simple_percentage = 10;
        float complex_percentage = 5;
        float sum_1 = 0;
        float sum_2 = 0;

        int i = 0;
        
        while (sum_2 <= sum_1) {
                sum_1 = deposit_1 * (1 + ((simple_percentage * i) / 100));
                sum_2 = deposit_2 * power((1 + (complex_percentage / 100)), i);
                cout << i << "    " << sum_1 << "    " << int(sum_2) << endl;
                i++;
        }
        
        return 0;
}

float power(float x, long n) {
        if (n == 0) return 1;
        if (n < 0) return power(1 / x, -n);
        if (n % 2) return x * power(x, n - 1);
        return power(x * x, n / 2);
}
