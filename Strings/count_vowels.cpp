#include <iostream>

using namespace std;

int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input); // Read the entire line including spaces

    int vowelCount = 0;
    for (char ch : input)
    {
        char lowerCh = tolower(ch);
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' ||
            lowerCh == 'o' || lowerCh == 'u')
        {
            vowelCount++;
        }
    }

    cout << "Number of vowels: " << vowelCount << endl;
    return 0;
}

// example usage:
// Input: "Hello World"
// Output: Number of vowels: 3

// Input: "abracadabra"
// Output: Number of vowels: 5
