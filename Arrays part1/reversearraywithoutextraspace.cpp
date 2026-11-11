#include<iostream>
using namespace std;
void swap( int arr[], int n , int* start , int* end)
{
    int temp= arr[*end];
    arr[*end]= arr[*start];
    arr[*start]= temp;
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    int paglu[]={7,5,6,3,2,1};
    int n= sizeof(paglu)/sizeof(int);
    int start=0;
    int end=n-1;
     while(start<end)
     {
        swap(paglu,n,&start,&end);
        start++;
        end--;
     }
     printarray(paglu,n);
     return 0;
}