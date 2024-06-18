#include <iostream>

int main() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << "Каждый второй элемент: ";
    for (int i = 1; i < 10; i += 2) {
        std::cout << array[i] << " ";
    }

    std::cout << "\nКаждый третий элемент: ";
    for (int i = 2; i < 10; i += 3) {
        std::cout << array[i] << " ";
    }

    return 0;
}