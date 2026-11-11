#include<iostream>
using namespace std;

 int isprime(int n)
 {
    int flag=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
        flag=1;
        }
    }
    return flag;
 }

 int main()
 {
    if(isprime(23)==1)
    {
        cout<<"not prime";

    }
    else
    {
        cout<<"Prime";
    }
    return 0;
 }