#include <iostream>
#include <cstring>
#include <stack>
#include <map>

int isBalanced(char *exp)
{
    // Create map
    std::map<char, char> mapping;
    mapping['}'] = '{';
    mapping[')'] = '(';
    mapping[']'] = '[';

    // Create map iterator
    std::map<char, char>::iterator itr;

    // Create stack
    std::stack<char> stk;

    for (int i = 0; i < strlen(exp); i++)
    {
        if (exp[i] == '{' || exp[i] == '[' || exp[i] == '(')
        {
            stk.push(exp[i]);
        }
        else if (exp[i] == '}' || exp[i] == ']' || exp[i] == ')')
        {
            if (stk.empty())
            {
                return false;
            }
            else
            {
                char temp = stk.top();
                itr = mapping.find(exp[i]);
                if (temp == itr->second)
                { // itr->first is key, itr->second is value
                    stk.pop();
                }
                else
                {
                    return false;
                }
            }
        }
    }
    return stk.empty() ? true : false;
}

int main()
{
    char A[] = "{([a+b]*[c-d])/e}";
    std::cout << isBalanced(A) << '\n';

    char B[] = "{([a+b]}*[c-d])/e}";
    std::cout << isBalanced(B) << '\n';

    char C[] = "{([{a+b]*[c-d])/e}";
    std::cout << isBalanced(C) << '\n';

    return 0;
}
