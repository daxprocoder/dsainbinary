// To convert a string from uppercase to lowercase and vice versa using binary operations in C++

#include <iostream>
#include <string>
using namespace std;

string toggleCase(string str) {
    for (char &c : str) {
        if (isalpha(c)) {
            // XOR with 32 to toggle the case (32 is the difference between uppercase and lowercase ASCII values)
            c ^= 32;
        }
    }
    return str;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string toggled = toggleCase(input);
    cout << "Toggled Case: " << toggled << endl;

    return 0;
}
