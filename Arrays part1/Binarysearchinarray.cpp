/*Binary search in an array helps us to find a key i.e a particular element in an
array which is placed at a specific index number using a more efficient way as compared
to Linear search. The only requirement is that the array must be sorted, which means 
there should be no random placements of elements in an array */


#include <iostream>
using namespace std;

int binary_array(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    for (int i = 0; i < n; i++)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{

    int paglu[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(paglu) / sizeof(int);
    int key;
    cout << "Enter the key to be searched= ";
    cin >> key;

    cout << "The index number containing the key is= " << binary_array(paglu, n, key) << endl;
    return 0;
}