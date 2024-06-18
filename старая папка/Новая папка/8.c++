#include <iostream>

using namespace std;

int main() {
    int b;
    int sum = 0;
    int count = 0;

    cout << "Введите число b: ";
    cin >> b;

    for (int i = 150; i <= b; i++) {
        sum += i;
        count++;
    }

    float average = (float)sum / count;

    cout << "Среднее арифметическое: " << average << endl;

    return 0;
}