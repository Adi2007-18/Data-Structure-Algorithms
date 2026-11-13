#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> &p1, pair<int, int> &p2)
{
    return p1.second < p2.second;
}
int max_chain(vector<pair<int, int>> &pair)
{

    int n = pair.size();
    sort(pair.begin(), pair.end(), compare);
    int end = pair[0].second;
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (end <= pair[i].first)
        {
            count++;
            end = pair[i].second;
        }
    }
    return count;
}
void print(vector<pair<int, int>> &pair)
{
    for (int i = 0; i < pair.size(); i++)
    {
        cout << "(" << pair[i].first << "," << pair[i].second << ")" << endl;
    }
}

int main()
{
    vector<pair<int, int>> pair(5, make_pair(0, 0));
    pair[0] = make_pair(5, 24);
    pair[1] = make_pair(39, 60);
    pair[2] = make_pair(5, 28);
    pair[3] = make_pair(27, 40);
    pair[4] = make_pair(50, 90);

    cout << "The longest Chain is = " << max_chain(pair) << endl;

    return 0;
}