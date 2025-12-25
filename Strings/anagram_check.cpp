#include <iostream>
using namespace std;

int main()
{
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    if (str1.length() != str2.length())
    {
        cout << "Not anagrams" << endl;
        return 0;
    }

    int count[256] = {0}; // Assuming ASCII character set

    for (char c : str1)
    { // Count frequency of each character in str1
        count[c]++;
    }

    for (char c : str2)
    { // Decrease frequency based on str2
        count[c]--;
    }

    for (int i = 0; i < 256; i++)
    { // Check if all counts are zero
        if (count[i] != 0)
        {
            cout << "Not anagrams" << endl;
            return 0;
        }
    }

    cout << "Anagrams" << endl;
    return 0;
}

// example input/output:
// Enter first string: listen / decimal
// Enter second string: silent / medical
// Anagrams
