#include<iostream>
using namespace std;

void odd_even(int num)
{
    int bitmask=1;
    if(!(num&bitmask))
    {
        cout<<"The number is EVEN"<<endl;

    }
    else
    {
        cout<<"The number is ODD"<<endl;
    }
}
int main()
{
    odd_even(6);
    odd_even(5);
    return 0;
}