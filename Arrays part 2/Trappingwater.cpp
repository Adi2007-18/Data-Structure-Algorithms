#include <iostream>
#include <climits>
using namespace std;

void trap(int *height, int n)
{
    int leftmax[20000];
    leftmax[0] = height[0]; // here if we use INT_MIN while calculating (INT_MIN-4= positive number) which is wrong because negative infinity-anything is equal to negative number so we initialise it with same array element to get answer zero
    int rightmax[20000];
    rightmax[n - 1] = height[n - 1];
    for (int i = 1; i < n; i++)
    {
        leftmax[i] = max(leftmax[i - 1], height[i - 1]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        rightmax[i] = max(rightmax[i + 1], height[i + 1]);
    }

    int currwater = 0;
    int heightofwater = 0;
    for (int i = 0; i < n; i++)
    {
        int currwater = min(leftmax[i], rightmax[i]) - height[i];
        if (currwater > 0)
        {
            heightofwater += currwater;
        }
    }
    cout << "The height of water= " << heightofwater << endl;
}
int main()
{
    int height[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(height) / sizeof(int);
    trap(height, n);
    return 0;
}
