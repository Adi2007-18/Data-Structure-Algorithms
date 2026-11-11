#include <iostream>
#include <vector>
using namespace std;

void binary_search(vector<int> arr, int si, int ei, int key)
{
    if (si >= ei)
    {
        cout << "Element not found";
        return;
    }
    int mid = si + (ei - si) / 2;
    if (arr[mid] == key)
    {
        cout << "Element Found at= " << mid;
        return;
    }
    else if (arr[mid] > key)
    {
        binary_search(arr, si, mid, key);
    }
    else
    {
        binary_search(arr, mid + 1, ei, key);
    }
}
int main()
{
    vector<int> arr = {1, 4, 5, 7, 8, 9};
    int n = sizeof(arr) / sizeof(int);
    binary_search(arr, 0, 5, 8);
    return 0;
}