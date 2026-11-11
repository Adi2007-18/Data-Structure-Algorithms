#include <iostream>
#include <vector>
using namespace std;

void merge(int *arr, int si, int ei, int mid)
{
    vector<int> temp;
    int i = si;
    int j = mid + 1;
    while (i <= mid && j <= ei)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }
    while (j <= ei)
    {
        temp.push_back(arr[j++]);
    }
    for (int i = si, x = 0; i <= ei; i++)
    {
        arr[i] = temp[x++];
    }
}
void print_array(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void merge_sort(int *arr, int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    int mid = si + (ei - si) / 2;
    merge_sort(arr, si, mid);     // Left half
    merge_sort(arr, mid + 1, ei); // Right half
    merge(arr, si, ei, mid);
}
int main()
{
    int arr[] = {6, 3, 4, 5, 2, 7};
    int n = sizeof(arr) / sizeof(int);
    merge_sort(arr, 0, n - 1);
    print_array(arr, n);
    return 0;
}