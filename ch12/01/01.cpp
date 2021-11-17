// 01.cpp

#include <iostream>

#include "cow.h"

int main()
{
    const char* name = "Maestro";
    const char* hobby = "Pereigrat i unichtozit deshowok";
    Cow a;
    Cow b(a);
    Cow c = a;
    Cow d(name, hobby, 24);
    a.ShowCow();
    b.ShowCow();
    c.ShowCow();
    d.ShowCow();

    return 0;
}

