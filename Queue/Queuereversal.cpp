#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void queue_reversal(queue<int> &og)
{
    stack<int> s;

    while (!og.empty())
    {
        s.push(og.front());
        og.pop();
    }

    while (!s.empty())
    {
        og.push(s.top());
        s.pop();
    }
}

int main()
{
    queue<int> reverse_paglu;
    for (int i = 0; i <= 10; i++)
    {
        reverse_paglu.push(i);
    }
    queue_reversal(reverse_paglu);
    while (!reverse_paglu.empty())
    {
        cout << reverse_paglu.front() << endl;
        reverse_paglu.pop();
    }
    return 0;
}