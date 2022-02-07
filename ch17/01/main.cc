#include <iostream>

using namespace std;
const int LIMIT = 20;
int main()
{
    char input[LIMIT];
    char ch;
    cin.get(input, LIMIT, '$');
    cout << "You input: " << input << endl;
    cin.get(ch);
    cout << "Last input: " << ch;

    return 0;
}
