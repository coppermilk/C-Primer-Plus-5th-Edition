#include <iostream>

using namespace std;

struct bop {
        char full_name[80];
        char title[80];
        char bop_name[80];
        int preference;
};

int main() {
        const int number_of_programmers = 3;
        char ch;
        int end_flag = 0;

        bop programmer[3] {
                {
                        "fill",
                        "junior",
                        "fossa",
                        1
                }, {
                        "mike",
                        "midl",
                        "kosa",
                        2
                }, {
                        "sern",
                        "senior",
                        "duck",
                        0
                },
        };

        cout << "Benevolent Order of Programmers Report\n"
        " a. display by name\t b. display by title\n"
        " c. display by bopname\t d. display by preference\n"
        " q. quit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        while (ch != 'q' && !end_flag) {
                switch (ch) {
                case 'a':
                        for (int i = 0; i < number_of_programmers; i++) {
                                cout << programmer[i].full_name << endl;
                        }
                        break;
                case 'b':
                        for (int i = 0; i < number_of_programmers; i++) {
                                cout << programmer[i].title << endl;
                        }
                        break;

                case 'c':
                        for (int i = 0; i < number_of_programmers; i++) {
                                cout << programmer[i].bop_name << endl;
                        }
                        break;
                case 'd':
                        for (int i = 0; i < number_of_programmers; i++) {

                                switch (programmer[i].preference) {

                                case 0:
                                        cout << programmer[i].full_name << endl;
                                        break;
                                case 1:
                                        cout << programmer[i].title << endl;
                                        break;
                                case 2:
                                        cout << programmer[i].bop_name << endl;
                                        break;

                                }

                        }

                        break;
                case 'q':
                        end_flag = 1;
                        break;

                }
                cout << "Enter your choice: ";
                cin >> ch;
        }

        return 0;
}
