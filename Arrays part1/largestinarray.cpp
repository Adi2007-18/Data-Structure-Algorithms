#include<iostream>
using namespace std;
int main()
{
 int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        if(arr[0]<arr[i])
        {
            arr[0]=arr[i];
        }
    }
    cout<<"The largest number in array is= "<<arr[0]<<endl;
    return 0;
    
}