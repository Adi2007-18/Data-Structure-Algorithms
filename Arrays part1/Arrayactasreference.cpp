#include<iostream>
using namespace std;
void changeval(int arr[])
{
    arr[0]=122;
}
int main()
{
int kash[3]={1,2,3};
changeval(kash);// kash which is the array name in the main function acts as a pointer which passes the address of the zeroth index location to the function
cout<<kash[0];
return 0;

}