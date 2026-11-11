#include <iostream>
using namespace std;

void maxsumarray(int *arr, int n)
{
    int maxsum = 0;
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int currsum = 0;
            for (int i = start; i <= end; i++)
            {
                currsum += arr[i];
            }
            cout << currsum << ",";
            if (maxsum < currsum)
            {
                maxsum = currsum;
            }
        }
        cout << endl;
    }
    cout << "The maximum sum is= " << maxsum;
}
int main()
{
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = 6;
    maxsumarray(arr, n);
    return 0;
}