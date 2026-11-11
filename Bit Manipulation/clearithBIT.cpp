#include<iostream>
using namespace std;

int clearith_bit(int num , int i)
{
    int bitmask= ~(1<<i);
    return( num&bitmask);

}

int main()
{
    cout<<clearith_bit(6,1);
    return 0;
}