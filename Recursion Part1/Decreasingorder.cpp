#include<iostream>
using namespace std;
void order(int n)
{
    if(n==0)
    {
        return ;
    }
    cout << n << ",";
    order(n - 1);
    
}

int main()
{
   order(5);
    return 0;
}