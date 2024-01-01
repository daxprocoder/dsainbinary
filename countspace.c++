#include <iostream>

int countOccurrences(const int arr[], int size, int target)
{
    int count = 0;

    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == target)
        {
            ++count;
        }
    }

    return count;
}

int main()
{
    const int size = 5;              // Change this to the size of your array
    int arr[size] = {1, 2, 3, 2, 4}; // Change this to your array

    int target;
    std::cout << "Enter the element to count: ";
    std::cin >> target;

    int occurrences = countOccurrences(arr, size, target);

    std::cout << "The count of " << target << " in the array is: " << occurrences << std::endl;

    return 0;
}
