#include <iostream>

int main() {
    int array[10] = {5, 8, 20, 31, 40, 50, 62, 73, 89, 100};

    std::cout << "Четные элементы: ";
    for (int i = 0; i < 10; i++) {
        if (array[i] % 2 == 0) {
            std::cout << array[i] << " ";
        }
    }

    std::cout << "\nЭлементы, оканчивающиеся на 0: ";
    for (int i = 0; i < 10; i++) {
        if (array[i] % 10 == 0) {
            std::cout << array[i] << " ";
        }
    }

    return 0;
}