#include <iostream>

using namespace std;

double fill_array(double * a, int size);
void show_array(double * a, int size);
void reverse_array(double * a, int size);

const int array_size = 32;
int main(){

double my_array[array_size];

int real_size = fill_array(my_array, array_size);
show_array(my_array, real_size);
reverse_array(my_array, real_size);
show_array(my_array, real_size);

return 0;
}

double fill_array(double * a, int size) {
        int i = 0;
        double tmp;
        
        while ((cin >> tmp) && i < size) {
                //cout << "enter num #" << i << ": ";
                a[i] = tmp;
                i++;
        }
        
        return i;

}

void show_array(double * a, int size) {

        for (int i = 0; i < size; i++) {
                cout << a[i] << " ";
        }
}

void reverse_array(double * a, int n) {
    
       for( int low = 0, hight = n - 1; low <= hight; low ++, hight--){
           double tmp;
           tmp = a[low];
           a[low] = a[hight];
           a[hight] = tmp;
       }
    
}
