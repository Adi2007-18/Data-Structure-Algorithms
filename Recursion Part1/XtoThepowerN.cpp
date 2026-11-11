// This is the code with O(n) Time Complexity
#include<iostream>
using namespace std;

int power(int x , int n)
{
    if(n==1)
    {
        return x;
    }
    return x* power(x, n-1);
}
int main()
{
  cout<<  power(9,7);
  return 0;
}