#include "isogram.hpp"
#include <iostream>

auto is_isogram(std::string const & word) -> bool {

    std::string s = word;
    if (s.empty()) {
        return true;
    }

    else {

        for (int i = 0; i <= s.length()-1; i++) {
            s[i] = tolower(s[i]);

        }
        std::sort(s.begin(), s.end());

        for (int i = 0; i <= s.length()-1; i++) {

            if ((s[i] == s[i + 1]) and (isalpha(s[i]))) {

                return false;

            }
        }
        return true;
    }
}