#include <iostream>

using namespace std;

struct CandyBar {
        char name[80];
        float weight;
        int calories;

};

int main() {
        const int number_of_candies = 3;

        CandyBar snack[number_of_candies] = {
                {
                        "Mocha Munch",
                        2.3,
                        350
                },
                {
                        "Ptich'ye Moloko",
                        0.5,
                        250
                },
                {
                        "Siesta",
                        0.1,
                        623
                },
        };

        for (int i = 0; i < number_of_candies; ++i) {
                cout << "Name: " << snack[i].name <<
                        "; weight: " << snack[i].weight <<
                        "; calories: " << snack[i].calories << endl;
        }
        return 0;
}
