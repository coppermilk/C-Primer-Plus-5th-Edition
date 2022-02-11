#include "cmake-build-debug/somedefs.h"
#include <iostream>
#include <functional>

double dub(double x) {return 2.0 * x;}
double square(double  x){return x *x;}

int main(){
    using std::cout;
    using std::endl;
    double y = 1.21;

    std::function<double(double)> ef1 = dub;
    std::function<double(double)> ef2 = square;
    std::function<double(double)> ef3 = Fp(5.0);
    std::function<double(double)> ef4 = Fq(5.0);
    std::function<double(double)> ef5 = [](double u)->double {return u*u;};
    std::function<double(double)> ef6 = [](double u)->double {return u+u/2.0;};

    cout << "Function pointer dub:\n";
    cout <<" " << use_f(y, ef1) << endl;
    cout << "Function pointer square: \n";
    cout << " " << use_f(y, ef2) << endl;
    cout << "Function object fp:\n";
    cout << " "<< use_f(y, ef3) << endl;
    cout << "Function object fq:\n";
    cout << " "<< use_f(y, ef4) << endl;
    cout << "Lambda expression 1:\n";
    cout << " " << use_f(y, ef5) << endl;
    cout << "Lambda expression 2:\n";
    cout << " " <<use_f(y, ef6) << endl;

}
