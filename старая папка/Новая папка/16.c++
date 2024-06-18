#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    float array[15];

    // Инициализация генератора случайных чисел
    srand(static_cast<unsigned int>(time(0)));

    cout << "Массив из 15 случайных вещественных чисел в диапазоне от 0 до 10: ";
    for (int i = 0; i < 15; i++) {
        array[i] = static_cast<float>(rand()) / RAND_MAX * 10; // Генерация случайного вещественного числа в диапазоне от 0 до 10
        cout << array[i] << " ";
    }

    return 0;
}