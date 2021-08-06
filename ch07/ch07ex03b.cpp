#include <iostream>

using namespace std;

struct box {
        char maker[40];
        float height;
        float width;
        float lenght;
        float volume;
};
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
        calculate_the_volume(p_mybox);

        return 0;
}

void calculate_the_volume(box * x) {
        x -> volume = x -> height * x -> lenght * x -> width;
}
