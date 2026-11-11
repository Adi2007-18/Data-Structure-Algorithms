#include<iostream>
using namespace std;

int clearith_bit(int num , int i)
{
    int bitmask= (~0)<<i;
    return( num&bitmask);

}

int main()
{
    cout<<clearith_bit(15,2);
    return 0;
}