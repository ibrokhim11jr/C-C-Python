#include <iostream>
#include <string>

int main() {
    std::string word;
    int k;
    
    std::cout << "Введите слово: ";
    std::cin >> word;
    
    std::cout << "Введите номер символа k: ";
    std::cin >> k;
    
    std::cout << "Символ на позиции " << k << ": " << word[k-1] << std::endl;

    return 0;
}