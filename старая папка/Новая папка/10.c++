#include <iostream>

using namespace std;

int main() {
    int a, b;
    int sum = 0;
    int count = 0;

    cout << "Введите число a: ";
    cin >> a;
    
    cout << "Введите число b (больше a): ";
    cin >> b;

    for (int i = a; i <= b; i++) {
        sum += i;
        count++;
    }

    float average = (float)sum / count;

    cout << "Среднее арифметическое: " << average << endl;

    return 0;
}