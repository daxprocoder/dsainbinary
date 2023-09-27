// Write a C++ program to implement the binary search algorithm. 
// The program should take an integer array as input and ask the user to enter a target value to search for in the array.
//  If the target value is found, the program should display the index at which it was found;
// otherwise, it should print "Target not found."


// SOLUTION

#include <iostream>

// Function to perform binary search
int binarySearch(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid; // Target found, return the index
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1; // Target not found
}

int main()
{
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int arr[size];
    std::cout << "Enter " << size << " elements in sorted order: ";
    for (int i = 0; i < size; ++i)
    {
        std::cin >> arr[i];
    }

    int target;
    std::cout << "Enter the target value to search for: ";
    std::cin >> target;

    int result = binarySearch(arr, size, target);

    if (result != -1)
    {
        std::cout << "Target found at index " << result << std::endl;
    }
    else
    {
        std::cout << "Target not found." << std::endl;
    }

    return 0;
}
