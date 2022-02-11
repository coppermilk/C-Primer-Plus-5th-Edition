// lexcast.cpp -- простое преобразование из float в string
#include <iostream>
#include <string>
#include "lexical_cast.hpp"
int main()
{
    using namespace std;
    cout << "Enter your weight: "; // запрос на ввод веса
    float weight;
    cin >> weight;
    string gain = "A 10% increase raises "; // увеличение веса на 10% и вывод результата
    string wt = boost::lexical_cast<string>(weight);
    gain = gain + wt + " to "; // operator* () для строки
    weight = 1.1 * weight;
    gain = gain + boost::lexical_cast<string>(weight) + " ." ;
    cout << gain << endl;
    return 0;
}
