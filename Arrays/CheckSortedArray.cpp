#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false; // Array is not sorted
        }
    }
    return true; // Array is sorted
}

int main()
{
    int arr[] = {5, 19, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, size))
    {
        cout << "The array is sorted." << endl;
    }
    else
    {
        cout << "The array is not sorted." << endl;
    }
}
