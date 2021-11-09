#include "firstnamespace.h"
#include <iostream>
// void SALES::Sales::
 SALES::Sales::Sales(const double ar[], int n) {
    for (int i = 0; i < n; i++) {
        sales[i] = ar[i];

    }
    average = getAverage(ar, n);
    max = getMax(ar, n);
    min = getMin(ar, n);
}
 
 SALES::Sales::Sales() {
    for (int i = 0; i < SALES::Sales::QUARTERS; i++) {
        std::cout << "Enter total sales for " << i + 1 << " quarters: ";
        std::cin >> sales[i];

    }
    average = getAverage(sales, SALES::Sales::QUARTERS);
    max = getMax(sales, SALES::Sales::QUARTERS);
    min = getMin(sales, SALES::Sales::QUARTERS);
}


void SALES::Sales::showSales() {

    for (int i = 0; i < SALES::Sales::QUARTERS; i++) {
        std::cout << "Enter total sales for " << i + 1 << " quarters: " << sales[i] << std::endl;
    }

    std::cout << "average: " << average << std::endl;
    std::cout << "max: " << max << std::endl;
    std::cout << "min: " << min << std::endl;

}

double SALES::Sales::getAverage(const double ar[], int n) {
    double sum = 0;
    for (int i = 0; i < SALES::Sales::QUARTERS; i++) {
        sum += ar[i];
    }
    return sum / SALES::Sales::QUARTERS;

}

double SALES::Sales::getMax(const double ar[], int n) {
    double max = ar[0];
    for (int i = 0; i < SALES::Sales::QUARTERS; i++) {
        if (max < ar[i]) {
            max = ar[i];
        }
    }
    return max;
}

double SALES::Sales::getMin(const double ar[], int n) {
    double min = ar[0];
    for (int i = 0; i < SALES::Sales::QUARTERS; i++) {
        if (min > ar[i]) {
            min = ar[i];
        }
    }
    return min;
}
