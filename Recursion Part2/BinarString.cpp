// Print all binary strings of size "n" without any consecutive 1s.
#include <iostream>
using namespace std;

void binary_string(int n, string ans)
{
    if (n == 0) // Base Case
    {
        cout << ans << endl;
        return;
    }
    int lastplace = ans.size() - 1;
    if (ans[lastplace] != '1') // Should not write "if(ans[lastplace]=='0')" That would give wrong answer.
    {
        binary_string(n - 1, ans + '0');
        binary_string(n - 1, ans + '1');
    }
    else
    {
        binary_string(n - 1, ans + '0');
    }
}
int main()
{
    string ans = "";
    binary_string(3, ans);
    return 0;
}
