// 10_6.cpp :
#include <iostream>

#include "Move.h"

int main() {
        Move m1(1, 1);
        m1.showMove();

        Move m2(2, 2);
        m2 = m2.add(m1);
        m2.showMove();
        m2.reset();
        m2.showMove();
}
