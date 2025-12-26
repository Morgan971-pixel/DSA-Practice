#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
    {
        return 1; // Base case: factorial of 0 or 1 is 1
    }
    return n * factorial(n - 1); // Recursive case
}

int main()
{
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else
    {
        int result = factorial(number);
        cout << "Factorial of " << number << " is " << result << endl;
    }

    return 0;
}

// time complexity: O(n)
// space complexity: O(n) due to recursive call stack

// iterative version

int factorial_iterative(int n)
{
    int result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else
    {
        int result = factorial(number);
        cout << "Factorial of " << number << " is " << result << endl;
    }

    return 0;
}

// time complexity: O(n)
// space complexity: O(1)
