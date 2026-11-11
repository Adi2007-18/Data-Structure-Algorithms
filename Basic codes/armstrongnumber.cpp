#include<iostream>
using namespace std;
int main()
{
    int lastdig,cubesum,n;
    cout<<"Enter a number= ";
    cin>>n;
    while(n>0)
    {
        lastdig = n%10;
        cubesum += lastdig*lastdig*lastdig;
        n/=10;
    }
    if(cubesum==n)
    {
        cout<<"The number is an armstrong number";
    }
    else{
        cout<<"The number is not an armstrong number";

    }

    return 0;
}