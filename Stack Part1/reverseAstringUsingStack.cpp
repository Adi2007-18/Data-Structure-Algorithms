#include<iostream>
#include<stack>
#include<string>
using namespace std;

string reversestring(string str)
{
    stack<char> s;
    for(int i=0 ; i< str.size() ; i++)
    {
        s.push(str[i]);
        
    }

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return str;
}


int main()
{
    reversestring("Aditya");
    return 0;
}