// 4.9
#include <iostream>

#include <cstring>

using namespace std;

struct CandyBar {
        char name[80];
        float weight;
        int calories;

};
int
main() {
        const int number_of_candies = 3;

        CandyBar * snack = new CandyBar[number_of_candies];
        strcpy(snack[0].name, "Mocha Munch");
        snack[0].weight = 2.3;
        snack[0].calories = 350;

        strcpy(snack[1].name, "Ptich'ye Moloko");
        snack[1].weight = 0.5;
        snack[1].calories = 250;

        strcpy(snack[2].name, "Siesta");
        snack[2].weight = 0.1;
        snack[2].calories = 623;

        for (int i = 0; i < number_of_candies; ++i) {
                cout << "Name: " << snack[i].name <<
                        "; weight: " << snack[i].weight <<
                        "; calories: " << snack[i].calories << endl;
        }
        
        delete[] snack;
        return 0;
}
