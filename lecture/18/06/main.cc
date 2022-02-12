#include "cmake-build-debug/somedefs.h"
#include <iostream>

double dub(double x) {return 2.0 * x;}
double square(double  x){return x *x;}

int main(){
    using std::cout;
    using std::endl;
    double y = 1.21;
    cout << "Function pointer dub:\n";
    cout << " " << use_f(y, dub) << endl;
    cout << "Function pointer square: \n";
    cout << " " << use_f(y, square) << endl;
    cout << "Function object fp:\n";
    cout << " "<< use_f(y, Fp(5.0)) << endl;
    cout << "Function object fq:\n";
    cout << " "<< use_f(y, Fq(5.0)) << endl;
    cout << "Lambda expression 1:\n";
    cout << " " << use_f(y, Fq(5.0)) << endl;
    cout << use_f(y, [](double &u)->double {return  u*u;});
    cout << "Lambda expression 2:\n";
    cout << use_f(y, [](double &u)->double {return u+u/2.0;});

}