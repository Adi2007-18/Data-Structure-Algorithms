#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

void duplicate_parenthesis(string str)
{
    stack<int> s;

    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        if (ch != ')' && ch != '}' && ch != ']')
        {
            s.push(ch);
        }
        else
        {
            int count = 0;
            while (!s.empty() && s.top() != '(' && s.top() != '{' && s.top() != '[')
            {

                s.pop();
                count += 1;
            }

            if (!s.empty())
            {
                s.pop();
            }
            if (count == 0)
            {
                cout << "Duplicate Parenthesis" << endl;
                return;
            }
        }
    }
    cout << "No Duplicate  Parenthesis" << endl;
}

int main()
{
    duplicate_parenthesis("((x+y)+c)");
    return 0;
}
