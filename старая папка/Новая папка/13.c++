#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int array[15];

    // Инициализация генератора случайных чисел
    srand(time(0));

    cout << "Массив из 15 случайных чисел: ";
    for (int i = 0; i < 15; i++) {
        array[i] = rand() % 100; // Генерация случайных чисел от 0 до 99
        cout << array[i] << " ";
    }

    return 0;
}