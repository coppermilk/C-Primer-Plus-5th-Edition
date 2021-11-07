#include "firstnamespace.h"
#include <iostream>

    void SALES::setSales(Sales & s, const double ar[], int n){
        for(int i = 0; i < n; i++){
            s.sales[i] = ar[i];
           
        }
        s.average = average(s);
        s.max = max(s);
        s.min = min(s);
    }
    
    void SALES::setSales(Sales & s){
        for(int i = 0; i < SALES::QUARTERS; i++){
            std::cout << "Enter total sales for " << i + 1<< " quarters: ";
            std::cin >> s.sales[i];
            
        }
        s.average = average(s);
            s.max = max(s);
            s.min = min(s);
    }
    
    
    void SALES::showSales(const Sales & s){
        
         for(int i = 0; i < SALES::QUARTERS; i++){
            std::cout << "Enter total sales for " << i + 1<< " quarters: " << s.sales[i] << std::endl;
        }
     
        std::cout << "average: " << s.average << std::endl;
        std::cout <<"max: " << s.max << std::endl;
        std::cout << "min: " << s.min << std::endl;
        
    }
    
    double SALES::average(Sales & s){
        double sum = 0;
          for(int i = 0; i < SALES::QUARTERS; i++){
             sum +=s.sales[i]; 
        }
        return sum/SALES::QUARTERS;
        
    }
    
    double SALES::max(Sales & s){
        double max = s.sales[0];
        for(int i = 0; i < SALES::QUARTERS; i++){
             if(max < s.sales[i]){
                 max = s.sales[i];
             }
        }
        return max;
    }
    
    double SALES::min(Sales & s){
        double min = s.sales[0];
        for(int i = 0; i < SALES::QUARTERS; i++){
             if(min > s.sales[i]){
                 min = s.sales[i];
             }
        }
        return min;
    }
