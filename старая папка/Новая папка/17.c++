#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    float array[15];

    // Инициализация генератора случайных чисел
    srand(static_cast<unsigned int>(time(0)));

    cout << "Массив из 15 случайных вещественных чисел в диапазоне от -50 до 50: ";
    for (int i = 0; i < 15; i++) {
        array[i] = -50 + static_cast<float>(rand()) / RAND_MAX * (50 - (-50)); // Генерация случайного вещественного числа в диапазоне от -50 до 50
        cout << array[i] << " ";
    }

    return 0;
}