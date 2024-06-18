#include <iostream>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    std::cout << "Пары чисел-близнецов до 200:\n";
    for (int i = 2; i <= 200; i++) {
        if (isPrime(i) && isPrime(i + 2)) {
            std::cout << i << " и " << i + 2 << std::endl;
        }
    }
    return 0;
}