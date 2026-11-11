#include <iostream>
#include <string>
using namespace std;

void duplicate(string str, string ans, int i, bool *map)
{
    char ch = str[i];
    int mapidx = (int)(ch - 'a');
    if (i == str.size())
    {
        cout << ans;
        return;
    }
    if (map[mapidx] == false)

    {
        map[mapidx] = true;
        duplicate(str, ans + str[i], i + 1, map);
    }
    else
    {

        duplicate(str, ans, i + 1, map);
    }
}

int main()
{
    string str = "appnnacollege";
    string ans = " ";
    bool map[26] = {false};
    duplicate(str, ans, 0, map);

    return 0;
}
