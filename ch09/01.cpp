#include <iostream>
#include<string.h>

#include "golf.h"

using namespace std;

int main() {
        golf g;
        while (1)
                if (!setgolf(g)) {
                        break;
                }
        return 0;
}

int setgolf(golf & g) {
        char name[64];
        int handicap;
        int nameValid = 0;
        cout << "Input name: ";
        cin >> name;
        if (strlen(name) > 0) {
                nameValid = 1;

        }
        //cin >> name;
        cout << "Input handicap: ";
        cin >> handicap;
        setgolf(g, name, handicap);
        showgofl(g);
        return nameValid;
}

void setgolf(golf & g,
        const char * name, int hc) {
        strcpy(g.fullname, name);
        g.handicap = hc;
}

void handicap(golf & g, int hc) {
        g.handicap = hc;
}

void showgofl(const golf & g) {
        cout << "_____________" << endl;
        cout << g.fullname << endl;
        cout << g.handicap << endl;
}
