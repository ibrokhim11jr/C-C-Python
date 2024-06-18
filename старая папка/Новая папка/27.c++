#include <iostream>
#include <string>

int main() {
    std::string word;
    
    std::cout << "Введите слово: ";
    std::cin >> word;
    
    if (word[0] == word[word.length()-1]) {
        std::cout << "Первый и последний символы одинаковы: " << word[0] << std::endl;
    } else {
        std::cout << "Первый и последний символы разные" << std::endl;
    }

    return 0;
}