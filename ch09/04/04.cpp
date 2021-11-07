#include <iostream>
#include "firstnamespace.h"

using namespace std;

int main() {
        SALES::Sales s1;
        const double ar[] = {
                16,
                32,
                64,
                128
        };
        
        SALES::setSales(s1, ar, SALES::QUARTERS);
        SALES::showSales(s1);

        SALES::Sales s2;
        SALES::setSales(s2);
        SALES::showSales(s2);

        return 0;
}
