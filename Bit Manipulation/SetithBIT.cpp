#include<iostream>
using namespace std;

int setith_bit(int num,int i)
{
    int bitmask= 1<<i;
    return (num|bitmask);

}
int main()
{
    cout<<setith_bit(6,3);
    return 0;
}