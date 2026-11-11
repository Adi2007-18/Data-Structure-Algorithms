#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, sum=0,  digits=0;
    int i=0;
    cout<<"Enter a number= ";
    cin>>n;
    
    
    
    
       
        while(n!=0){
        int r= n%10;
        sum=sum+ r*pow(2,i);
        n=n/10;
        i++;
        }
    

    
    cout<<"The Decimal Number is= "<<sum;
    
}

