#include <iostream>
#include <string>
using namespace std;

int main()
{
    char A[] = "finding";
    int freq[26], i;
    for (i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }
    for (i = 0; A[i] != '\0'; i++)
    {
        freq[A[i] - 'a']++;
    }

    for (i = 0; i < 26; i++)
    {
        if (freq[i] > 1)
        {
            cout << (char)(i + 'a') << " appears " << freq[i] << " times" << endl;
        }
    }
    return 0;
}
