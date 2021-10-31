#include <iostream>

template < typename T >
        T max5(T * array) {
                T max = array[0];
                for (int i = 0; i < 5; i++) {
                        if (array[i] > max) {
                                max = array[i];
                        }
                }
                return max;
        }

int main() {

        double dArray[] = {
                1.2345,
                8.234,
                3.57,
                4.67876
        };
        int iArray[] = {
                1,
                2,
                8,
                4,
                5
        };

        std::cout << max5(dArray) << std::endl;
        std::cout << max5(iArray) << std::endl;

}
