#include<iostream>
using namespace std ;

bool getith_bit(int num , int i)
{
    int bitmask= 1<<i;
    if(!(num&bitmask))
    {
        return 0;
    }
    else
    {
        return 1;

    }
}

int main()
{
    cout<<getith_bit(12,3);
    return 0;
}