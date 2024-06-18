#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int count = 0;

    for (int i = 1; i <= 750; i++) {
        sum += i;
        count++;
    }

    double average = static_cast<double>(sum) / count;

    cout << "Среднее арифметическое всех целых чисел от 1 до 750: " << average << endl;

    return 0;
}