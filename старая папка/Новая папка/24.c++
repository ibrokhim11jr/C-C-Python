#include <iostream>
#include <string>

int main() {
    std::string word = "программа";

    std::cout << "Третий символ: " << word[2] << std::endl;
    std::cout << "Последний символ: " << word[word.length() - 1] << std::endl;

    return 0;
}