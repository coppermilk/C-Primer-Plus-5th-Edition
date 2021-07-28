#include <iostream>

using namespace std;

void string_first();
void string_second();

int main() {
        string_first();
        string_first();
        string_second();
        string_second();

        return 0;
}

void string_first() {
        cout << "Three blind mice" << endl;
}

void string_second() {
        cout << "See how they run" << endl;
}
