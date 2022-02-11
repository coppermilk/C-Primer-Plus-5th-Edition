//
// Created by f on 11.02.22.
//

#ifndef FIRST_SOMEDEFS_H
#define FIRST_SOMEDEFS_H


#include <iostream>

template<typename T, typename F>
T use_f(T v, F f){
    static int count = 0;
    count++;
    std::cout << " use_f count = " << count
              << ", &count = " << &count << std::endl;
    return f(v);
}

class Fp{
private:
    double z_;
public:
    explicit Fp(double  z = 1.0) : z_(z) {}
    double operator()(double p) const {return z_ *p;}
};

class Fq{
private:
    double z_;
public:
    explicit Fq(double  z = 1.0) : z_(z){}
    double operator()(double q) const {return  z_+ q;}
};


#endif //FIRST_SOMEDEFS_H
