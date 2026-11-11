#include <iostream>
#include <vector>
using namespace std;

int last_occurence(vector<int> arr, int target, int i)
{
    if (i == arr.size())
    {
        return -1;
    }
    int idx = last_occurence(arr, target, i + 1);

    if (idx == -1)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return idx;
}
int main()
{
    vector<int> arr = {1, 2, 3, 3, 4, 5};
    cout << last_occurence(arr, 9, 0);
    return 0;
}