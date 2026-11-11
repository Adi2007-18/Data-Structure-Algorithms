#include<iostream>
using namespace std;
int main()
{
    int i;
    do
    {
        cout<<"Enter a number= ";
        cin>>i;
        if(i%10 == 0)
        {
            continue;
        }
        cout<<"The entered number is = "<<i<<endl;

    } while (i>0);
     
      return 0;


}