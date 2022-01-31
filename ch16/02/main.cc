#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>

bool is_palindrom(const std::string * p_word);

int main() {

        //std::string word;
        //std::cin >> word;

        std::string word = "Madam, I'm Adam";

        const std::string * p_word = & word;
        std::cout << is_palindrom(p_word);
}

bool is_palindrom(const std::string * p_word) {

        std::string clean_word = ( * p_word);

        // to lower
        std::transform(p_word -> begin(), p_word -> end(),
                clean_word.begin(), [](auto
                        const & c) {
                        return std::tolower(c);
                });

        // clean not letter
        clean_word.erase(std::remove_if(clean_word.begin(), clean_word.end(),
                [](auto
                        const & c) -> bool {
                        return !std::isalnum(c);
                }), clean_word.end());

        bool is_palindrom = true;
        size_t size = clean_word.size();
        for (int i = 0; i <= size / 2; ++i) {
                if ((clean_word[i]) != (clean_word[size - 1 - i])) {
                        is_palindrom = false;
                        break;
                }
        }

        return is_palindrom;
}

