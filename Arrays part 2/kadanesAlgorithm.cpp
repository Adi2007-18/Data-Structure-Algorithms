#include <iostream>
#include <climits>
using namespace std;
void maxsumarray(int *arr, int n)
{
    int currsum = 0;
    int maxsum = INT_MIN;
    for (int start = 0; start < n; start++)
    {
        currsum += arr[start];
        maxsum = max(maxsum, currsum);
        if (currsum < 0)
        {
            currsum = 0;
        }
    }
    cout << "The maximum sum of a subarray is = " << maxsum << endl;
}

int main()
{
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = 6;
    maxsumarray(arr, n);
    return 0;
}