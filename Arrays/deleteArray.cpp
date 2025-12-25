#include <iostream>
using namespace std;

int deleteElement(int arr[], int& size, int target)
{
    int index = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        // Element not found
        return -1;
    }

    // Shift elements to the left to overwrite the target element
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--; // Reduce the size of the array
    return index; // Return the index of the deleted element
}

int main()
{
    int arr[] = {12, 26, 34, 19, 70};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 19;

    int result = deleteElement(arr, size, target);
    if (result != -1)
    {
        cout << "Element deleted at index: " << result << endl;
        cout << "Updated array: ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
}
