#include<iostream>
using namespace std;
int main()
{
     int i,n,t;
    cout<<"Enter a number= "<<endl;
    cin>>n;

   
    for(i=2;i<=n;i++)
    {

       
        
        if(i%n==0){
        t=1;}
       if(t==0){
       
        cout<<i<<" ";
       }
        }
       
    
    return 0;
}