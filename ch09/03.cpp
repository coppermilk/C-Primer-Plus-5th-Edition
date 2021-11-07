#include <iostream>
#define QUANTITY 2

using namespace std;

struct chaff {
        char dross[20];
        int slag;

};

void printArray(chaff * S);

int main() {
        chaff array[QUANTITY];

        for (int i = 0; i < QUANTITY; i++) {
                cout << "Structure: " << i + 1 << endl;
                cout << "Enter name: ";
                cin >> array[i].dross;
                cout << "Enter the quantity: ";
                cin >> array[i].slag;
        }
        printArray(array);
        return 0;
}

void printArray(chaff * s) {
        for (int i = 0; i < QUANTITY; i++) {
                cout << "___________" << endl;
                cout << "Value 1: " << s[i].dross << endl;
                cout << "Value 2: " << s[i].slag << endl;
        }
}
