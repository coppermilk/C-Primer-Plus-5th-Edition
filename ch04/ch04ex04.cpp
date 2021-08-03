#include <cstring>
#include <iostream>

int main() {
        using namespace std;
        string first_name;
        string last_name;
        string full_name;
        
        //const * char str = "Here's the information in a single string: ";
        
        cout << "What is your first name? ";
        cin >> first_name;

        cout << "What is your last name? ";
        cin >> last_name;
        full_name = first_name + ", " + last_name;

        cout << "Here's the information in a single string: " << full_name;

        return 0;
}
