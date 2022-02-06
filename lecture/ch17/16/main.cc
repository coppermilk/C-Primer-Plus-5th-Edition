#include <iostream>
#include <string>
#include <fstream>

int main()
{
    using namespace std;
    string filename;
    cout << "Enter name for new file: ";
   // cin >> filename;

    filename = "first.txt";
    ofstream fout(filename.c_str());
    fout << "For your eyes only\n";
    cout << "Enter your secter number: ";
    float secret;
   // cin >> secret;
    secret = 123.45;
    fout << "Your secret number is " << secret << endl;
    fout.close();


    ifstream fin(filename.c_str());
    cout << "Here are the contenst of " << filename << ": \n";
    char ch;
    while (fin.get(ch)) {
        cout << ch;
    }
    fin.close();
    cout << "Done";
    return 0;
    
}
