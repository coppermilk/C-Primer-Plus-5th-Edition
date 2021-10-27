#include <iostream>

using namespace std;

void printing_line_is_equal_to_call_function_if_sec_param(char * ch, int n = 0);

int main() {
        char ch[64] = "line";
        int second_param = 4;
  
        printing_line_is_equal_to_call_function_if_sec_param(ch);
        printing_line_is_equal_to_call_function_if_sec_param(ch, second_param);
        printing_line_is_equal_to_call_function_if_sec_param(ch, second_param);
  
        return 0;
}

void printing_line_is_equal_to_call_function_if_sec_param(char * ch, int n) {
        static int times_call_function = 1;
  
        if (n == 0) {
                cout << ch << endl;
        } else {
                for (int i = 0; i < times_call_function; i++) {
                        cout << ch << endl;
                }
        }
        times_call_function++;
}
