#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double x, y, z;

    std::cout << "Enter the value of x: ";
    std::cin >> x;

    std::cout << "Enter the value of y: ";
    std::cin >> y;

    double numerator = x + (2 + y) / (x * x);
    double denominator = y + 1 / std::sqrt(x * x + 10);
    z = numerator / denominator;

    std::cout << "The value of z is: " << std::fixed << std::setprecision(2) << z << std::endl;

    return 0;
}