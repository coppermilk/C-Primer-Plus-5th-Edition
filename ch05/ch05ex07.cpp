#include <iostream>
#include <cstring>

using namespace std;

int main() {
        char word[64];
        int wolds_counter = 0;
        cout << "Enter worlds (\"done\" for exit)" << endl;

        cin >> word;

        while (strcmp(word, "done")) {
                wolds_counter++;
                cin >> word;
        }
        
        cout << "Tolal words = " << wolds_counter;
        return 0;
}
