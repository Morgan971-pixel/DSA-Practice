#include <iostream>
using namespace std;

void Insert(int arr[], int &size, int element, int position, int capacity)
{
    if (position < 0 || position > size)
    {
        cout << "Invalid position" << endl;
        return;
    }

    if (size >= capacity)
    {
        cout << "Array is full, cannot insert" << endl;
        return;
    }

    // Shift elements to the right to create space for the new element
    for (int i = size - 1; i >= position; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[position] = element;
    size++; // Increase the size of the array
}

int main()
{
    const int capacity = 10; // Define the maximum capacity of the array
    int arr[capacity] = {10, 20, 30, 40, 50};
    int size = 5; // Current size of the array
    int element = 25;
    int position = 4;

    Insert(arr, size, element, position, capacity);

    cout << "Array after insertion: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
