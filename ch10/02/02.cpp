// 10_2.cpp 

#include <iostream>
#include "Person.h"

#pragma warning(disable: 4996)

int main() {
        Person one;
        Person two("Smythecraft");
        Person three("Dimwiddy", "Sam");

        three.Show();
        three.FormalShow();

}
