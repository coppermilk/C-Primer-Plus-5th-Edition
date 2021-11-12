#pragma once#include <string>

#ifndef STACK
#define STACK

class Stack {
        private:
                enum {
                        Limit = 3
                };
        std::string lines[Limit];
        int index;

        public:
        Stack();
        bool isEmpty();
        bool isFull();

        bool pop();
        bool puch(const std::string str);
        bool stringReverse(int i);

        void printStack();

        int getIndex();
};

#endif // STACK
