#include <iostream>
#include "winec.h"
Wine::Wine(const char* l, int y, const int yr[], const int bot[]) : label(l), year(y), vb(ArrayInt(y), ArrayInt(y))
{
        //vb(ArrayInt(y), ArrayInt(y));
        for (int i = 0; i < y; i++)
        {
                vb.first()[i] = yr[i];
                vb.second()[i] = bot[i];
        }
}

Wine::Wine(const char* l, int y) : label(l), year(y), vb(ArrayInt(0, y), ArrayInt(0, y)) {}

void Wine::GetBottles()
{
        for (int i = 0; i < year; i++)
        {
                std::cout << "Enter the vintage year: ";
                std::cin >> vb.first()[i];
                std::cout << "Enter the number of bottles: ";
                std::cin >> vb.second()[i];
        }
}

int Wine::sum() const
{
        return vb.second().sum();
}

void Wine::Show() const
{
        std::cout << "Wine: " << label << std::endl;
        std::cout << "Year" << '\t' << "Bottles" << std::endl;
        for (int i = 0; i < year; i++)
        {
                std::cout << vb.first()[i] << '\t' << vb.second()[i];
        }
}
