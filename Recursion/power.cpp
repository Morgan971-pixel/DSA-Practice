#include <iostream>
using namespace std;

// time complexity: O(n)
// space complexity: O(n) due to recursive call stack
int power(int m, int n)
{
    if (n == 0)
        return 1;
    return power(m, n - 1) * m;
}

// time complexity: O(log n)
// space complexity: O(log n)
int power1(int m, int n)
{
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return power1(m * m, n / 2);
    return m * power1(m * m, (n - 1) / 2);
}

int main()
{
    int r = power1(9, 3);
    printf("%d ", r);
    return 0;
}
