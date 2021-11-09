#include "Move.h"

#include <iostream>

Move::Move(double a, double b) {
        x = a;
        y = b;
}

void Move::showMove() const {
        std::cout << "x = " << x << " y = " << y << std::endl;
}

Move Move::add(const Move & m) const { // cant change m2 becouse const here;
        Move temp;
        temp.x = x + m.x;
        temp.y = y + m.y;
        //double a = temp.x;
        //double b = temp.y
        //Move::reset(a, b);
        return temp;

        /*x += m.x;
        y += m.y;
        return *this;*/
}

void Move::reset(double a, double b) {
        x = a;
        y = b;
}
