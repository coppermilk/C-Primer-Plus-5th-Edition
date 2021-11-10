#pragma once

struct customer {
        char fullname[35];
        double payment;
};

typedef customer Items;

class Stack {
        private:
                enum {
                        LIMIT = 2
                };
        Items items[LIMIT];
        int index;
        public:
                Stack();

        bool isEmpty();
        bool isFull();

        bool pop(Items & item);
        bool push(Items & item);
        void printSTack();
};
