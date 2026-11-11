#include <iostream>
#include <string>
#include <vector>
using namespace std;

string valid_Parenthesis(string str)
{
    vector<char> vec;
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        if (ch == '(' || ch == '{' || ch == '[')
        {
            vec.push_back(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']')
        {
            if (vec.empty()) // For empty stack with no opening brackets
            {
                return "invalid Parenthesis";
            }
            if (vec.back() == '(' && ch == ')' || vec.back() == '{' && ch == '}' || vec.back() == '[' && ch == ']')
            {
                vec.pop_back();
            }
            else
            {
                return "Invalid Parenthesis";
            }
        }
    }
    if (vec.empty()) // For  opening brackets which ar still present in the string
    {
        return " valid Parenthesis";
    }
    else
    {
        return "Invalid Parenthesis";
    }
}

int main()
{
    string str1 = valid_Parenthesis("()");
    string str2 = valid_Parenthesis("({{]})");
    cout << "The Given String is a = " << str1 << endl;
    cout << "The Given String is a = " << str2 << endl;
    return 0;
}