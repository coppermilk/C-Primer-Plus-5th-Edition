// 10_8.cpp
//

#include <iostream>
#include "Stack.h"

int main() {
        char ch;
        Stack s;
        std::string gameName;
        int id;

        std::cout << "Type A to add game name" << std::endl;
        std::cout << "P to delete the client, and Q to exit" << std::endl;
        std::cout << "I to reverse game name" << std::endl;

        while (std::cout << "->", std::cin >> ch && (toupper(ch) != 'Q')) {

                while ((std::cin).get() != '\n') {
                        continue;
                }

                if (!isalpha(ch)) {
                        std::cout << '\a';
                }
          
                switch (ch) {
                case 'a':
                        if (!s.isFull()) {
                                std::cout << "Enter game name: ";
                                //std::cin >> gameName;
                                getline(std::cin, gameName);
                                s.puch(gameName);
                        } else {
                                std::cout << "stack is Full!" << std::endl;
                        }
                        break;

                case 'p':
                        if (!s.isEmpty()) {
                                s.pop();
                        } else {
                                std::cout << "Stack is Empty!" << std::endl;
                        }
                        break;

                case 'i':
                        s.printStack();
                        while (true) {
                                std::cout << "Input id to reverse: ";
                                std::cin >> id;
                                if (s.stringReverse(id)) {
                                        break;
                                } else if (s.isEmpty()) {
                                        std::cout << "Error this index doesn\'t exist." << std::endl;
                                        break;
                                } else {
                                        continue;
                                }
                        }

                }
                s.printStack();

        }

}
