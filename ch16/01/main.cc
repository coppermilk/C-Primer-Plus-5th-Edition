#include <iostream>
#include <string>

bool is_palindrom(const std::string * p_word);

int main() {

        std::string word;

        std::cin >> word;

        const std::string * p_word = & word;
        std::cout << is_palindrom(p_word);
}

bool is_palindrom(const std::string * p_word) {
        size_t size = p_word -> size();
        bool is_palindrom = true;

        for (int i = 0; i <= size / 2; ++i) {
                if (((*p_word)[i]) != ((*p_word)[size - 1 - i])) {
                        is_palindrom = false;
                        break;
                }
        }

        return is_palindrom;
}
