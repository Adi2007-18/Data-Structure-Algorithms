#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void greater_element(vector<int> value, vector<int> ans)
{
    stack<int> s;
    s.push(value[value.size() - 1]);
    ans[value.size() - 1] = -1;
    for (int i = value.size() - 2; i >= 0; i--)
    {
        int currval = value[i];

        while (!s.empty() && currval >= s.top())
        {
            s.pop();
        }

        if (s.empty())
        {
            ans[i] = -1;
        }
        else
        {
            ans[i] = s.top();
        }
        s.push(value[i]);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{
    vector<int> value = {6, 8, 0, 1, 3};
    vector<int> ans = {0, 0, 0, 0, 0};
    greater_element(value, ans);
    return 0;
}
