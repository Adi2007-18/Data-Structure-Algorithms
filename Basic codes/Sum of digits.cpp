#include <iostream>
using namespace std;
int main()
{
int n , sum=0;
n= 74568;
while (n>0)
{
    int lastdig = n%10;
    sum += lastdig;
    n/=10;
}
 cout<<"The sum of all the digits is= "<<sum<<endl;
 return 0;
}