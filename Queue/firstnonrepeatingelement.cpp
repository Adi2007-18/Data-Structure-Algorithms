#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main()
{
    queue<char> q;
    int freq[26] = {0, 0, 0};
    string str = "aabccbb";
    for (int i = 0; i < str.size(); i++)
    {
        int val = str[i] - 'a';
        freq[val]++;

        q.push(str[i]);

        while (!q.empty() && freq[q.front() - 'a'] > 1)
        {
            q.pop();
        }
    }
    if (!q.empty())
    {

        cout << "The first non repeating element is = " << q.front();
    }
    else
    {
        cout << "No non repeating element found!!!!!!! " << endl;
    }
    return 0;
}
