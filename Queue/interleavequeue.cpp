#include <iostream>
#include <queue>
#include <string>
using namespace std;

void interleave_queue(queue<int> &original)
{
    queue<int> first;
    int n = original.size();

    for (int i = 0; i < n / 2; i++)
    {
        first.push(original.front());
        original.pop();
    }

    while (!first.empty())
    {
        original.push(first.front());
        first.pop();
        original.push(original.front());
        original.pop();
    }

    while (!original.empty())
    {
        cout << original.front() << endl;
        original.pop();
    }
}
int main()
{
    queue<int> original;
    original.push(1);
    original.push(2);
    original.push(3);
    original.push(4);
    original.push(5);
    original.push(6);
    original.push(7);
    original.push(8);
    original.push(9);
    original.push(10);
    interleave_queue(original);
    return 0;
}
