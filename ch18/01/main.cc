#include <iostream>
#include <initializer_list>
using namespace  std;

template <typename T>
T average_list(std::initializer_list<T> t){
    T sum = 0;
    for (auto i : t){
        sum += i;
    }
    T answer = sum / t.size();
    return answer;
}

int main () {
    using namespace std;
    // Список double выведен из содержимого списка
    auto q = average_list({15.4, 10.7, 9.0});
    cout << q << endl;
    //Список int выведен из содержимого списка
    cout << average_list({20, 30, 19, 17, 45, 38}) << endl;
    // Принудительное использование списка double
    auto ad = average_list<double>({'A', 70, 65.33});
    cout << ad << endl;
    return 0;
}
