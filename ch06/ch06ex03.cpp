#include <iostream>
#include <cctype>

using namespace std;

int main() {
        char ch;
        cout << "Please enter c, p, t, g

        cin.get(ch).get();
        int flag_exit = 0;
        while (ch && !flag_exit) {

                switch (ch) {
                case 'c':
                        cout << "Gray";
                        flag_exit = 1;
                        break;
                case 'p':
                        cout << "Pink";
                        flag_exit = 1;
                        break;
                case 't':
                        cout << "Fvkjg";
                        flag_exit = 1;
                        break;
                case 'g':
                        cout << "Purple";
                        flag_exit = 1;
                        break;
                default:
                        cout << "Please enter c, p, t, g: ";
                        cin.get(ch).get();
                }

        }

        return 0;
}
