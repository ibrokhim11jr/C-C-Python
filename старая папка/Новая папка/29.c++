#include <iostream>
#include <vector>

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
    std::vector<int> arr = {123, 456, 789, 101, 223, 337, 555};
    
    std::cout << "Трехзначные числа в массиве: ";
    for (int num : arr) {
        if (num >= 100 && num <= 999) {
            std::cout << num << " ";
        }
    }
    
    std::cout << "\nПростые числа в массиве: ";
    for (int num : arr) {
        if (isPrime(num)) {
            std::cout << num << " ";
        }
    }
    
    return 0;
}