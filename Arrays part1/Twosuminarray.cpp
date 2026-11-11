#include <iostream>
using namespace std;

void twosum_array(int *arr, int n, int target)

{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "The indices are= " << i << " and " << j << endl;
            }
        }
    
}

}
int main()
{

    int paglu[] = {1,2,3,4,5,6,7,8,9,10};

    int n = sizeof(paglu) / sizeof(int);
    int target;
    cout << "Enter the target= ";
    cin >> target;

    twosum_array(paglu, n, target);
    return 0;
}