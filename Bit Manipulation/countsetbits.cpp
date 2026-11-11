#include<iostream>
using namespace std;
void count_setbit(int num)
{int bitmask=1;
    int count=0;
    while(num>0)
    {
       int lastdig= num&bitmask;
       count+=lastdig;
      num= num>>1;
    }
    cout<<count<<endl;
}
int main()
{
    count_setbit(7);
    return 0;
}