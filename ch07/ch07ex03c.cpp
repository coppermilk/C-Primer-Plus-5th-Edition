#include <iostream>

using namespace std;

struct box {
        char maker[40];
        float height;
        float width;
        float lenght;
        float volume;
};

void printer(box * x);
void calculate_the_volume(box * x);

int main() {
        box mybox = {
                "make",
                1,
                2,
                3,
                4
        };
        box * p_mybox = nullptr;
        p_mybox = & mybox;
        printer(p_mybox);
        calculate_the_volume(p_mybox);
        printer(p_mybox);

        return 0;
}

void calculate_the_volume(box * x) {
        x -> volume = x -> height * x -> lenght * x -> width;
}

void printer(box * x) {
        cout << x -> maker << endl;
        cout << x -> height << endl;
        cout << x -> width << endl;
        cout << x -> lenght << endl;
        cout << x -> volume << endl;
}
