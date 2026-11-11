#include<iostream>
using namespace std;
int main()
{
    int n , result=0 , lastdigit;
    cout<<"Enter a number= "<<endl;
    cin>>n;
    while(n>0)
    {
        lastdigit = n%10;
         result= result*10 + lastdigit;
         n/= 10;

    }
     cout<<"The reverse of given number is= "<<result;
     return 0;
     
}