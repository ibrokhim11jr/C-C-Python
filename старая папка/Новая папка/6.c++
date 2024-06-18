#include <iostream>
#include <cmath>

int main() {
    double x, y;
    std::cout << "Enter x value: ";
    std::cin >> x;

    if (x > 0) {
        y = std::pow(std::sin(x), 2);
    } else {
        y = 1 + 2 * std::pow(std::sin(x), 2);
    }

    std::cout << "y = " << y << std::endl;

    return 0;
}