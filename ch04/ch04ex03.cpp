#include <cstring>
#include <iostream>

int main() {
        using namespace std;
        char first_name[80];
        char last_name[80];
        char full_name[160];
        //const * char str = "Here's the information in a single string: ";
        cout << "What is your first name? ";
        cin.getline(first_name, 80);
        first_name[80] = '\0';

        cout << "What is your last name? ";
        cin.getline(last_name, 80);
        strcpy(full_name, strcat(strcat(first_name, ", "), last_name));

        cout << "Here's the information in a single string: " << full_name;

        return 0;
}
