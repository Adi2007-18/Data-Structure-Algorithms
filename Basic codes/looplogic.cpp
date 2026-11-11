#include<iostream>
using namespace std;
int main()
{
    int i,n;
    do
    {
        cout<<"Enter a number= ";
        cin>>i;
        if(i%10 == 0)
        {
            break;
        }
    }while(i>0);

    cout<<"The loop has ended as the breaking condition is met";



    return 0;
    
}