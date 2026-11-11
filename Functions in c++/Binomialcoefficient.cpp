#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;

    }
    return fact;

        
}
 int binocoeff(int a,int b)
 {
     int n= factorial(a);
     int r= factorial(b);
     int c= factorial(a-b);
      int result= n/(r*c);
       return result;


 }
  
 int main()
 {
    int a ,  b;
    cout<<"Enter first number= ";
    cin>>a;
    cout<<"Enter second number= ";
    cin>>b;
    int ans= binocoeff(a,b);
    cout<<"The Binomial Factor is= "<<ans;
    return 0;



 }