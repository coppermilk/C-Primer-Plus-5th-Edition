#include <iostream>
#include "firstnamespace.h"

using namespace std;

int main() {

    const double ar[] = {
            16,
            32,
            64,
            128
    };
    
    SALES::Sales s1(ar, 4);
    s1.showSales();

    SALES::Sales s2;
    s2.showSales();

    return 0;
}
