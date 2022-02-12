#include <iostream>

using namespace std;

class Useless {
private:
        int n;
        char * pc;
        static int ct;
        void ShowObject() const;
public:
        Useless();
        explicit Useless(int k);
        Useless(int k, char ch);
        Useless(const Useless & f);
        Useless(Useless && f);
        ~Useless();
        Useless operator + (const Useless & f) const;
        
        Useless & operator = (const Useless & f);
        Useless & operator =(Useless && f);
        

        // in case copy and move we need operator =()
        void ShowData() const;
};

int Useless::ct = 0;
Useless::Useless() {
        ++ct;
        n = 0;
        pc = nullptr;
        cout << "default constructor called; number of objects: " << ct << endl;
        ShowObject();
}
Useless::Useless(int k): n(k) {
        ++ct;
        cout << "int constructor called; number of objects: " << ct << endl;
        pc = new char[n];
        ShowObject();
}

Useless::Useless(int k, char ch): n(k) {
        ++ct;
        cout << "int, char constructor called; number of objects: " << ct << endl;
        pc = new char[n];
        for (int i = 0; i < n; i++) {
                pc[i] = ch;
        }
        ShowObject();
}

Useless::Useless(const Useless & f): n(f.n) {
        ++ct;
        cout << "copy const called; number of objects: " << ct << endl;
        pc = new char[n];
        for (int i = 0; i < n; i++) {
                pc[i] = f.pc[i];
        }
        ShowObject();
}

Useless::Useless(Useless && f): n(f.n) {
        ++ct;
        cout << "move constructor called; number of objects: " << ct << endl;
        pc = f.pc;
        f.pc = nullptr;
        f.n = 0;
        ShowObject();
}

Useless::~Useless() {
        cout << "destrucotro called; objects left: " << --ct << endl;
        cout << "delete objects:\n";
        ShowObject();
        delete[] pc;
}
Useless Useless::operator + (const Useless & f) const {
        cout << "Entering operator+()\n";
        Useless temp = Useless(n + f.n);
        for (int i = 0; i < n; i++) {
                temp.pc[i] = pc[i];
        }
        for (int i = 0; i < temp.n; i++) {
                temp.pc[i] = f.pc[i - n];
        }
        cout << "Temp object:\n";
        cout << "Leaving operator+()\n";
        return temp;

}

Useless & Useless::operator=(const Useless & f){
    std::cout << "copy assignment operator called:\n";
    
    if(this == &f){
        return *this;
    }
    delete [] pc;
    n = f.n;
    pc = new char[n];
    for (int i = 0; i < n; i++){
        pc[i] = f.pc[i];
    }
    return *this;
}

Useless & Useless::operator=(Useless && f){
    std::cout << "move assignment oprator called:\n";
    if(this == &f){
        return *this;
    }
    delete [] pc;
    n = f.n;
    pc = f.pc;
    f.n = 0;
    f.pc = nullptr;
    return *this;
}

void Useless::ShowObject() const {
        cout << "Number of elements: " << n;
        cout << " Data address; " << (void * ) pc << endl;
}

void Useless::ShowData() const {
        if (n == 0) {
                cout << "(object empty)";
        } else {
                for (int i = 0; i < n; i++) {
                        cout << pc[i];
                }
        }
        cout << endl;
}
int main() {
        Useless one(10, 'x');
        Useless two = one;
        Useless three(20, 'o');
        Useless four(one + three);
        cout << "object one: ";
        one.ShowData();
        cout << "object two: ";
        two.ShowData();
        cout << "object three ";
        three.ShowData();
        cout << "object four: ";
        four.ShowData();

        return 0;
}