#include<iostream>
using namespace std;
void changeval(int arr[])
{
    arr[1]=72;
    arr[2]=33;
}
int main()
{
    int arr[4]={1,2,3,4};
    changeval(arr);
    
    cout<<"The new value of the first index location is= "<<arr[1]<<endl;
    cout<<"The new value of the second index location is= "<<arr[2]<<endl;
    return 0;

}