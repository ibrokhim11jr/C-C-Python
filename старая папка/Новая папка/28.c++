#include <iostream>
#include <string>

int main() {
    std::string word1, word2;
    
    std::cout << "Введите первое слово: ";
    std::cin >> word1;
    std::cout << "Введите второе слово: ";
    std::cin >> word2;
    
    if (word1[0] == word2[0]) {
        std::cout << "Первое и второе слово начинаются одинаково: " << word1[0] << std::endl;
    } else {
        std::cout << "Первое и второе слово начинаются по-разному" << std::endl;
    }

    return 0;
}