#include <iostream>
#include <string>

std::string binaryToAlphabet(const std::string& binary) {
    std::string result;
    

    if (binary.length() % 8 != 0) {
        std::cerr << "Binary string length must be a multiple of 8." << std::endl;
        return result;
    }

    for (size_t i = 0; i < binary.length(); i += 8) {
        std::string byte = binary.substr(i, 8); 
        char character = 0;
        
        
        for (size_t j = 0; j < 8; j++) {
            character = (character << 1) + (byte[j] - '0');
        }
        
        
        result += character;
    }
    
    return result;
}

int main() {
    std::string binaryInput = "0100100001100101011011000110110001101111"; 
    std::string alphabetOutput = binaryToAlphabet(binaryInput);
    
    std::cout << "Binary: " << binaryInput << std::endl;
    std::cout << "Alphabet: " << alphabetOutput << std::endl;
    
    return 0;
}
