#include "Stack.h"
#include <iostream>

Stack::Stack() {
        index = 0;
}

bool Stack::isEmpty() {
        return index == 0;
}

bool Stack::isFull() {
        return index == Limit;
}

bool Stack::pop() {
        if (index > 0) {
                lines[index--];
                return true;
        } else {
                return false;
        }
}

bool Stack::puch(const std::string str) {
        if (index < Limit) {
                lines[index++] = str;
                return true;
        } else {
                return false;
        }
}

void Stack::printStack() {
        for (int i = 0; i < index; i++) {
                std::cout << "ID #" << i << " " << lines[i] << std::endl;
        }
}

bool Stack::stringReverse(int id) {
        if (id <= index) {
                std::reverse(lines[id].begin(), lines[id].end());
                return true;
        } else {
                return false;
        }
}

int Stack::getIndex() {
        return index;
}
