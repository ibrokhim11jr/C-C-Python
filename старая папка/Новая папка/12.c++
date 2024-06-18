#include <iostream>

using namespace std;

int main() {
    int array[10];

    cout << "Введите 10 значений для массива:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> array[i];
    }

    cout << "Введенный массив из 10 элементов: ";
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }

    return 0;
}