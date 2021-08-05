#include <iostream>

using namespace std;
const int SIZE = 10;

int golf_goggles_size(int golf_goggles[],
        const int size);
void show_arr(int ar[], int real_size);
double arr_average(int ar[], int real_size);

int main() {
        int real_size;
        int golf_goggles[SIZE];
  
        real_size = golf_goggles_size(golf_goggles, SIZE);
        show_arr(golf_goggles, real_size);
        arr_average(golf_goggles, real_size);
        return 0;
}

int golf_goggles_size(int golf_goggles[],
        const int size) {

        int counter_golf_googles = 0;

        for (int i = 0; i < 10; i++) {

                cout << "Enter golf goggles #" << i + 1 << ": ";
                cin >> golf_goggles[i];

                if (!cin.good()) {
                        break;
                } else {
                        counter_golf_googles++;
                }

        }
        return counter_golf_googles;
}

void show_arr(int ar[], int real_size) {

        for (int i = 0; i < real_size; i++) {
                cout << ar[i] << " ";
        }

        cout << endl;
}
double arr_average(int ar[], int real_size) {
        double average = 0;
        int sum = 0;
  
        for (int i = 0; i < real_size; i++) {
                sum += ar[i];
        }
  
        average = double(sum) / real_size;
        cout << average;
        return average;

}
