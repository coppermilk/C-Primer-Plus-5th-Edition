#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

const char* file = "quests.txt";
int main()
{
    using namespace std;
    char ch;

    ifstream fin;
    fin.open(file);
    if (fin.is_open()) {
        cout << "Here are the current contenst of the "
            << file << " file: \n";
        while (fin.get(ch)) {
            cout << ch;
        }
        fin.close();
    }

    ofstream fout(file, ios::out | ios::app);
    if (!fout.is_open()) {
        cerr << "Cant't open " << file << " file for output.\n";
        exit(EXIT_FAILURE);
    }

    cout << "Enter guests name (enter a blank line to quit:\n";
    string name;
    while (getline(cin, name) && name.size() > 0){
        fout << name << endl;
}
    fout.close();

    fin.clear();
    fin.open(file);
    if (fin.is_open()) {
        cout << "Here are teh new contenst of the " << file
            << " file: \n";
        while (fin.get(ch)) {
            cout << ch;
           
        }
        fin.close();
    }
    return 0;
    
}
