#include <iostream>
#include <cmath>

int main() {
    double theta, b;

    std::cout << "Введите значение угла theta: ";
    std::cin >> theta;

    b = sin(theta) + pow(cos(theta), 2);

    std::cout << "Значение функции b = sin(" << theta << ") + cos^2(" << theta << ") равно " << b << std::endl;

    return 0;
}