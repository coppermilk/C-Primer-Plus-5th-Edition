// 8.2
//
#pragma warning(disable: 4996)
#include <iostream>

struct CandyBar {
        char name[64];
        double weight;
        int callories;
};

void fill(CandyBar & c,
        const char * n = "Millennium Munch", double w = 2.85, int cal = 350);
        
void show(CandyBar & c);

int main() {
        CandyBar candy;
        fill(candy);
        show(candy);
        fill(candy, "Roshen", 5.68, 670);
        show(candy);

}

// In this function, we work with the structure by reference
void fill(CandyBar & c,
        const char * n, double w, int cal) {
        strcpy(c.name, n);
        c.weight = w;
        c.callories = cal;
}

// In this function, we work with the structure by reference
void show(CandyBar & c) {
        std::cout << c.name << " " << c.weight << " " << c.callories << std::endl;
}
