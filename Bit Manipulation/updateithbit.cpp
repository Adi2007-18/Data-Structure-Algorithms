#include<iostream>
using namespace std;

void updateith_bit(int num,int i,int val)
{
    num = num& ~(1<<i);
    num= num | (val<<i);
    cout<<num<<endl;
}
int main()
{
   updateith_bit(7,2,0);
    return 0;
}