#pragma warning(disable: 4996)

#include<iostream>
#include<cstring>

using namespace std;
struct stringy {
        char * str;
        int ct;
};

void set(stringy & s, char * line);
void show(stringy & s, int n = 1);
void show(const char * line, int n = 1);

int main() {
        stringy beany;
        char testing[] = "Reality isn't what it used to be.";
        set(beany, testing);
        show(beany);
        show(beany, 2);
        testing[0] = 'D';
        testing[1] = 'u';
        show(testing);
        show(testing, 3);
        show("Done!");

        return 0;
}

void set(stringy & s, char * line) {
        //std::cout << line;
        int len = strlen(line);
        char * temp = new char[len];
        s.str = temp;
        //std::cout << len;
        strcpy(temp, line);

        s.ct = len;
}

void show(stringy & s, int n) {
        for (int i = 0; i < n; i++) {
                std::cout << s.str << std::endl;
        }

}

void show(const char * line, int n) {
        for (int i = 0; i < n; i++) {
                std::cout << line << endl;
        }
}
