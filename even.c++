//  find even numbers using binary representation in C++ by examining the least significant bit (LSB) of the binary representation


#include <iostream>

bool isEven(int num) {
    // Check if the least significant bit is 0
    if ((num & 1) == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int number;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    if (isEven(number)) {
        std::cout << number << " is even." << std::endl;
    } else {
        std::cout << number << " is odd." << std::endl;
    }

    return 0;
}
