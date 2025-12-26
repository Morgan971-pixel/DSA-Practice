#include <iostream>
using namespace std;

int fM(int n, int memo[])
{
    if (n <= 1)
    {
        memo[n] = n;
        return n; // Base cases: fib(0) = 0, fib(1) = 1
    }
    if (memo[n - 1] == -1)
    {
        memo[n - 1] = fM(n - 1, memo);
    }
    if (memo[n - 2] == -1)
    {
        memo[n - 2] = fM(n - 2, memo);
    }
    memo[n] = memo[n - 1] + memo[n - 2]; // Store result in memo array
    return memo[n];
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
        int *memo = new int[number + 1];
        for (int i = 0; i <= number; i++)
        {
            memo[i] = -1; // Initialize memo array with -1
        }
        int result = fM(number, memo);
        cout << "Fibonacci of " << number << " is " << result << endl;
        delete[] memo; // Free allocated memory
    }

    return 0;
}

// time complexity: O(n)
// space complexity: O(n) due to memoization array and recursive call stack
