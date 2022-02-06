#include <iostream>
const int SLEN = 10;
inline void eatline() { while (std::cin.get() != '\n') continue; }

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    char name[SLEN];
    char title[SLEN];
    cout << "Enter your name: ";
    cin.get(name, SLEN);
    if (cin.peek() != '\n') {
        cout << "sorry, we only have enough room for "
            << name << endl;
    }
    eatline();
    cout << "Dear " << name << ", enter your title: \n";
    cin.get(title, SLEN);
    if (cin.peek() != '\n') {
        cout << "We weer forced to truncate your title. \n";
    }
    eatline();
    cout << "Name: " << name << "\tTitle: " << title << endl;
    return 0;
    
}
