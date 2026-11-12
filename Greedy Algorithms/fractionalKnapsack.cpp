#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<double, int> p1, pair<double, int> p2)
{
    return p1.first > p2.first;
}

int fractional_knapsack(vector<double> value, vector<double> weight, int w)
{
    int n = value.size();
    int ans = 0;

    vector<pair<double, int>> ratio(n, make_pair(0.0, 0));
    for (int i = 0; i < n; i++)
    {
        int r = value[i] / double(weight[i]);
        ratio[i] = make_pair(r, i);
    }

    sort(ratio.begin(), ratio.end(), compare);

    for (int i = 0; i < n; i++)
    {
        int idx = ratio[i].second;
        if (weight[idx] <= w)
        {
            ans += value[idx];
            w -= weight[idx];
        }
        else
        {

            ans += ratio[i].first * w;
            w = 0;
            break;
        }
    }
    return ans;
}

int main()
{
    vector<double> val = {60, 100, 120};
    vector<double> weight = {10, 20, 30};
    int w = 50;
    cout << "The maximum value= " << fractional_knapsack(val, weight, w);
    return 0;
}