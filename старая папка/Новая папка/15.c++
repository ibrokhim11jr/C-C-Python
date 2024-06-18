#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    float array[15];

    // Инициализация генератора случайных чисел
    srand(time(0));

    cout << "Массив из 15 случайных вещественных чисел в диапазоне от 22 до 23: ";
    for (int i = 0; i < 15; i++) {
        array[i] = 22 + static_cast<float>(rand()) / RAND_MAX * (23 - 22); // Генерация случайного вещественного числа в диапазоне от 22 до 23
        cout << array[i] << " ";
    }

    return 0;
}