// 10_7.cpp : 
//

#include <iostream>

#include "Plorg.h"


int main() {
        int newIndex = 42;
        Plorg p("Alan Greespen");
        std::cout << p.getName() << std::endl;
        std::cout << p.getSatisfactionIndex() << std::endl;
        p.setSatisfactionIndex(newIndex);
        std::cout << p.getSatisfactionIndex() << std::endl;
}
