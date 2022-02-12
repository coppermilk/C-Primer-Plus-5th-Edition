#include <iostream>

long double sum_values(){
    return 0;
}

template<typename T, typename ...Args>
long double sum_values(const T& values, const Args& ...args){
    long double sum = 0;
    sum = values + sum_values(args...);
    return  sum;
}

int main(){
    std::cout << sum_values(2, 3, 1);
    return  0;
}
