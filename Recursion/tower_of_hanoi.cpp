#include <iostream>
using namespace std;

void TOH(int n, int A, int B, int C)
{
    if (n > 0)
    {
        TOH(n - 1, A, C, B);                                         // Move n-1 disks from A to B using C as auxiliary tower
        printf("Move disk %d from tower %d to tower %d\n", n, A, C); // Move nth disk from A to C
        TOH(n - 1, B, A, C);                                         // Move n-1 disks from B to C using A as auxiliary tower
    }
}
int main()
{
    int number_of_disks;
    cout << "Enter the number of disks: ";
    cin >> number_of_disks;

    TOH(number_of_disks, 1, 2, 3); // A=1, B=2, C=3

    return 0;
}

// time complexity: O(2^n)
// space complexity: O(n) due to recursive call stack
