#include <iostream>

int main() {
    int array[10] = {3, -1, 4, -2, 7, 0, -5, 8, 2, -6};

    std::cout << "Неотрицательные элементы: ";
    for (int i = 0; i < 10; i++) {
        if (array[i] >= 0) {
            std::cout << array[i] << " ";
        }
    }

    std::cout << "\nОтрицательные элементы: ";
    for (int i = 0; i < 10; i++) {
        if (array[i] < 0) {
            std::cout << array[i] << " ";
        }
    }

    return 0;
}