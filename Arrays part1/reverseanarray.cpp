#include<iostream>
using namespace std;
void array_call(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
}
int main()
{
    int paglu[5]={1,2,3,4,5};
    int n= sizeof(paglu)/sizeof(int);
    int copypaglu[n];

    for (int i=0;i<n;i++)
    {
        int j=n-i-1;
        copypaglu[i]=paglu[j];


    }
    for (int i=0;i<n;i++)
    {
        paglu[i]=copypaglu[i];
    }
    array_call(paglu,n);
    return 0;

}