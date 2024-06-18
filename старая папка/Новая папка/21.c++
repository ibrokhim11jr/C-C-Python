#include <iostream>

int main() {
    int array[10] = {15, 25, 97, 100, 123, 45, 876, 33, 200, 10};

    std::cout << "Двузначные элементы: ";
    for (int i = 0; i < 10; i++) {
        if (array[i] >= 10 && array[i] <= 99) {
            std::cout << array[i] << " ";
        }
    }

    std::cout << "\nТрехзначные элементы: ";
    for (int i = 0; i < 10; i++) {
        if (array[i] >= 100 && array[i] <= 999) {
            std::cout << array[i] << " ";
        }
    }

    return 0;
}