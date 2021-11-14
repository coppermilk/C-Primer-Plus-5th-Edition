// randwalk.срр 
#include <iostream>
#include <cstdlib> // прототипы rand(), srand()
#include <ctime> // прототип time()
#include <vector>
#include <algorithm>    // min_element(), max_element()
#include <numeric>      // accumulate()



#include "vect.h"

//-------------------------------------------------------------------------------------------------
int main() {
    using namespace std;


    using VECTOR::Vector;
    srand(time(0)); // начальное значение для генератора случайных чисел 
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    std::vector < unsigned long > stepsResult;
    unsigned long steps = 0;
    double target;
    double dstep;
    int attempts;
  
    cout << "Enter number of attempts: ";
    cin >> attempts;

    for (int i = 0; i < attempts; i++) {

        cout << "Enter target distance (q to quit) : ";
        cin >> target;

        cout << "Enter step length: "; // ввод длины шага 
        if (!(cin >> dstep)) {
            break;
        }
    
        while (result.magval() < target) {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            // cout << steps << ":" << result << endl;
            steps++;

        }
        stepsResult.push_back(steps);
        result.reset(0.0, 0.0);
        
    }

    std::cout << "The smalest number of steps is ";
    std::cout << *std::min_element(stepsResult.begin(), stepsResult.end());
    std::cout << endl;

    std::cout << "The average number of steps is ";
    std::cout << std::accumulate(stepsResult.begin(), stepsResult.end(), 0) / stepsResult.size();
    std::cout << endl;

    std::cout << "The max number of steps is ";
    std::cout << *std::max_element(stepsResult.begin(), stepsResult.end());
    std::cout << endl;

    cout << "Bye!\n";

    std::cin.get();
    std::cin.get();

 
    return 0;

}
