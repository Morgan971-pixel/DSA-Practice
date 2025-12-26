#include <iostream>
using namespace std;

int fib(int n)
{
    if (n <= 0)
    {
        return 0; // Base case: fib(0) = 0
    }
    if (n == 1)
    {
        return 1; // Base case: fib(1) = 1
    }
    return fib(n - 1) + fib(n - 2); // Recursive case
}

int main()
{
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0)
    {
        cout << "Fibonacci is not defined for negative numbers." << endl;
    }
    else
    {
        int result = fib(number);
        cout << "Fibonacci of " << number << " is " << result << endl;
    }

    return 0;
}

// time complexity: O(2^n)
// space complexity: O(n) due to recursive call stack
