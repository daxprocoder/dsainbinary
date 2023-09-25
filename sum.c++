#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    string binaryNum1, binaryNum2;

    // Input the two binary numbers as strings
    cout << "Enter the first binary number: ";
    cin >> binaryNum1;
    cout << "Enter the second binary number: ";
    cin >> binaryNum2;

    // Ensure both binary strings have the same length by padding with zeros if necessary
    int max_length = max(binaryNum1.size(), binaryNum2.size());
    binaryNum1 = string(max_length - binaryNum1.size(), '0') + binaryNum1;
    binaryNum2 = string(max_length - binaryNum2.size(), '0') + binaryNum2;

    // Perform binary addition
    string result = "";
    int carry = 0;

    for (int i = max_length - 1; i >= 0; i--)
    {
        int bit1 = binaryNum1[i] - '0';
        int bit2 = binaryNum2[i] - '0';
        int sum = bit1 + bit2 + carry;
        result = to_string(sum % 2) + result;
        carry = sum / 2;
    }

    // If there's a carry left after the loop, add it to the result
    if (carry)
    {
        result = '1' + result;
    }

    // Output the binary sum
    cout << "Binary sum: " << result << endl;

    return 0;
}
