#include <iostream>
#include <climits>
using namespace std;

void Maxsum_array(int *arr, int n)
{
    int Max_sum = INT_MIN;
    for (int start = 0; start < n; start++)
    {
        int currsum = 0;

        for (int end = start; end < n; end++)
        {

            currsum += arr[end];
            Max_sum = max(Max_sum, currsum);
        }
    }
    cout << "The maximum sum of array is= " << Max_sum << endl;
}

int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    Maxsum_array(arr, n);
    return 0;
}