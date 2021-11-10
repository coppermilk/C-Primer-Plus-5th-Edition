// 10_5.11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#pragma warning(disable: 4996)#include "Stack.h"

#include <iostream>

#include "Stack.h"

int main() {
        Stack s;
        customer i;
        char ch;

        std::cout << "Type A to add the client," << std::endl;
        std::cout << "P to delete the client, and Q to exit" << std::endl;
        while (std::cin >> ch && toupper(ch) != 'Q') {
                while ((std::cin).get() != '\n') {
                        continue;
                }
                if (!isalpha(ch)) {
                        std::cout << '\a';
                        continue;
                }
                switch (ch) {
                case 'a':
                        std::cout << "Enter the customer name: ";
                        std::cin.getline(i.fullname, 35);

                        std::cout << "Enter payment amount: ";
                        (std::cin >> i.payment);
                        if (!s.isFull()) {
                                s.push(i);
                        } else {
                                std::cout << "Stack is Full." << std::endl;
                        }

                        break;
                case 'p':
                        if (!s.isEmpty()) {
                                s.pop(i);
                                std::cout << "deleted" << std::endl;
                        } else {
                                std::cout << "Stack is empty" << std::endl;
                        }

                }
                s.printSTack();
                std::cout << "Type A to add the client," << std::endl;
                std::cout << "P to delete the client, and Q to exit" << std::endl;
        }

}
