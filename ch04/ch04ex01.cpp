#include <iostream>

using namespace std;

struct user {
        char first_name[80];
        char last_name[80];
        char grade;
        int age;
};

int main() {

        user first_user;

        cout << "What is your first name? ";
        cin.getline(first_user.first_name, 80);
        cout << "What is your last name? ";
        cin.getline(first_user.last_name, 80);

        cout << "What letter grade do you desserve? ";
        cin >> first_user.grade;

        cout << "What is your age? ";
        cin >> first_user.age;

        cout << "Name: " << first_user.first_name << endl;
        cout << "Grade: " << ++first_user.grade << endl;
        cout << "Age: " << first_user.age << endl;
        return 0;
}
