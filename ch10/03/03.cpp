#include <iostream>

#include <string.h>

#include "goif.h"

#pragma warning(disable: 4996)
using namespace std;

int main() {

        char name[] = "Ponasekov";
        int handicap;
        cout << "Input name: ";
        cin >> name;
        cout << "input handicap: ";
        cin >> handicap;
        while (name[0] != '\0') {
                goif g(name, handicap);
                g.getGolf();
                cout << "Input name: ";
                cin >> name;
                cout << "input handicap: ";
                cin >> handicap;
        }

        return 0;
}
