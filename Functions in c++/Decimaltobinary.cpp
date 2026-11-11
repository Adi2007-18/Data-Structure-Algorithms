#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;double binnum=0;int i=0;
    cout<<"Enter a decimal number= ";
    cin>>n;
    while(n!=0)
    {
        int r=n%2;
        binnum= binnum+r*pow(10,i);
        n=n/2;
        i++;
    }
    cout<<"The Binary number is= "<<binnum;
return 0;
}