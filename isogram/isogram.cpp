#include "isogram.hpp"
#include <set>
#include <locale>

// Для фукнций std::isalpha и std::toupper используйте эту локаль
std::locale locale{""};

auto is_isogram(std::string const& word) -> bool {
    // Функция is_isogram получает на вход строку word
    // Возвращает true, если строка является изограммой,
    // и false, если не явялется
    // Код пишите здесь
    return word.empty();
}