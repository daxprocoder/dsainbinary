// Write a C++ program that takes a decimal number as input from the user and converts it
// to its binary representation. Additionally, explain the algorithm you used 
// for the conversion and any potential limitations of representing decimal numbers in binary.

#include <iostream>
#include <vector>

// Function to convert decimal to binary
std::vector<int> decimalToBinary(int decimal)
{
    std::vector<int> binary;

    if (decimal == 0)
    {
        binary.push_back(0);
    }
    else
    {
        while (decimal > 0)
        {
            binary.push_back(decimal % 2);
            decimal /= 2;
        }
    }

    // Reverse the binary vector to get the correct binary representation
    std::reverse(binary.begin(), binary.end());

    return binary;
}

int main()
{
    int decimal;

    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;

    if (decimal < 0)
    {
        std::cout << "Please enter a non-negative decimal number." << std::endl;
        return 1; // Exit with an error code
    }

    std::vector<int> binary = decimalToBinary(decimal);

    std::cout << "Binary representation: ";
    for (int digit : binary)
    {
        std::cout << digit;
    }

    std::cout << std::endl;

    return 0;
}
