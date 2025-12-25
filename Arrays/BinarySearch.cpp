#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            // Element found
            return mid;
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
    // Element not found
    return -1;
}

int main()
{
    int arr[] = {16, 26, 32, 70}; // Note: Array must be sorted for binary search
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 70;

    // Sort the array before performing binary search
    sort(arr, arr + size);

    int result = binarySearch(arr, size, target);
    if (result != -1)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
}
