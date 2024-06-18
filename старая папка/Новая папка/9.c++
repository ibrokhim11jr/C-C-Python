#include <iostream>

using namespace std;

int main() {
    int a;
    int sum = 0;
    int count = 0;

    cout << "Введите число a: ";
    cin >> a;

    for (int i = a; i <= 200; i++) {
        sum += i;
        count++;
    }

    float average = (float)sum / count;

    cout << "Среднее арифметическое: " << average << endl;

    return 0;
}