// Binary Question : Is it possible to perform a binary search on an unsorted array in C++ ?
// proof with example

#include <iostream>

bool linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == target)
        {
            return true; // Found the target element
        }
    }
    return false; // Target element not found
}

int main()
{
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    if (linearSearch(arr, size, target))
    {
        std::cout << "The target element " << target << " was found in the array." << std::endl;
    }
    else
    {
        std::cout << "The target element " << target << " was not found in the array." << std::endl;
    }

    return 0;
}
