#include <iostream>
#include <string>

using namespace std;

void show(string str);

int main() {
        string str;
        cout << "Enter string (q for exit)\n";
        while (getline(cin, str) && str[0] != 'q') {
                cout << "Enter string (q for exit) \n";
                show(str);
        }

        return 0;
}

// Тhis function takes a string as a constant argument, and convert letters to uppercase
void show(const string str) {
        for (int i = 0; str[i]; i++) {
                cout << (char) toupper(str[i]);
        }
        cout << endl;
}
