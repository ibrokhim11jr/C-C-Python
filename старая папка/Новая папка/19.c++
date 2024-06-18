#include <iostream>

int main() {
    int array[10] = {5, -10, 25, 80, -30, 50, 110, 0, -20, 100};

    std::cout << "Неотрицательные элементы: ";
    for (int i = 0; i < 10; i++) {
        if (array[i] >= 0) {
            std::cout << array[i] << " ";
        }
    }

    std::cout << "\nЭлементы, не превышающие 100: ";
    for (int i = 0; i < 10; i++) {
        if (array[i] <= 100) {
            std::cout << array[i] << " ";
        }
    }

    return 0;
}