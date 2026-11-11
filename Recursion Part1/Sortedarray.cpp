#include<iostream>
using namespace std;

bool sorted_array(int *arr , int n, int i)
{
    if(i==n)
    {
        return true;
    }
    if(arr[i]>arr[i+1])
    {
        return false;
    }
    sorted_array(arr , n-1 , i+1);

   
}

int main()
{
    int array[]= {1,2,4,3,5,6};
    int n=6;
    cout<<sorted_array(array , n ,0);
    return 0;
}