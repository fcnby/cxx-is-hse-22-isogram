#include "isogram.hpp"
#include <iostream>
#include <string>

int main() {
    std::string s;
    // Если строку не ввели
    if (!std::getline(std::cin, s))
        return -1;
    std::cout << '"' << s << "\" " << (is_isogram(s) ? "is" : "is not")
              << " an isogram\n";
    return 0;
}