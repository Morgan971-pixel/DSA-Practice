#include <iostream>
#include <cstring> // For strlen
using namespace std;

int main()
{
    char A[] = "Python";
    int i, j;

    // Calculate the length of the string
    j = strlen(A) - 1; // Adjust j to point to the last character of the string

    char t; // Declare the temporary variable
    for (i = 0; i < j; i++, j--)
    {
        t = A[i];
        A[i] = A[j];
        A[j] = t;
    }

    cout << A << endl; //
    return 0;
}
