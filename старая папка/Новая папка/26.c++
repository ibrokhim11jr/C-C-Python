#include <iostream>
#include <string>

int main() {
    std::string word;
    
    std::cout << "Введите слово: ";
    std::cin >> word;
    
    if (word[1] == word[3]) {
        std::cout << "Второй и четвертый символы одинаковы: " << word[1] << std::endl;
    } else {
        std::cout << "Второй и четвертый символы разные" << std::endl;
    }

    return 0;
}