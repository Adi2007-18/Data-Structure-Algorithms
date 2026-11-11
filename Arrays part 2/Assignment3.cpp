#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

void maxproduct(int *paglu, int n)
{
    int currproduct = 1;
    int maxproduct = INT_MIN;
    for (int i = 0; i < n; i++)
    {

        currproduct = currproduct * paglu[i];
        maxproduct = max(currproduct, maxproduct);
        if (currproduct < 0)
        {
            currproduct = 1;
        }
    }
    cout << "The maximum product is= " << maxproduct << endl;
}
int main()
{
    int paglu[] = {2, 3, -2, 4, 6};
    int n = 5;
    maxproduct(paglu, n);
    return 0;
}