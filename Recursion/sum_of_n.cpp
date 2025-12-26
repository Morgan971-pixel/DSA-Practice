#include <iostream>
using namespace std;

int sum_of_n(int n)
{
    if (n <= 0)
    {
        return 0; // Base case: sum of 0 or negative number is 0
    }
    return n + sum_of_n(n - 1); // Recursive case
}

int main()
{
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0)
    {
        cout << "Sum is not defined for negative numbers." << endl;
    }
    else
    {
        int result = sum_of_n(number);
        cout << "Sum of first " << number << " natural numbers is " << result << endl;
    }

    return 0;
}

// time complexity: O(n)
// space complexity: O(n) due to recursive call stack

// iterative version

int sum_of_n_iterative(int n)
{
    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        result += i;
    }
    return result;
}

// time complexity: O(n)
// space complexity: O(1)
