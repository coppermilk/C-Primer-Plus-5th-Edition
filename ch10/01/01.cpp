#include <iostream>

#include "BankClient.h"

using namespace NEW_CLIENT;

int main() {

    BankClient c1("First Name", 0);
    c1.balanceAdd(10.51);
    c1.balanceSubtract(10.0);
    std::cout << c1.getBallance() << std::endl;

    BankClient c2("Second Name", 1);
    c2.balanceSubtract(10000.0);
    std::cout << c2.getBallance() << std::endl;
}
