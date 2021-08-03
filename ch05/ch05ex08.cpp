#include <iostream>
#include <cstring>

using namespace std;
int main() {
        string word;
        int wolds_counter = 0;
        cout << "Enter worlds (\"done\" for exit)" << endl;

        cin >> word;

        while (word != "done") {
                wolds_counter++;
                cin >> word;
        }
        
        cout << "Tolal words = " << wolds_counter;
        return 0;
}
