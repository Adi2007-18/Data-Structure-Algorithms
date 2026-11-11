#include<iostream>
using namespace std;
void powerof_2(int num)
{
    if(((num)&(num-1))==0)
    {
        cout<<"The number is Power of 2"<<endl;

    }
    else
    {
        cout<<"The number os not a Power of 2"<<endl;
    }

}
int main()
{
    powerof_2(8);
    powerof_2(5);
    return 0;
}