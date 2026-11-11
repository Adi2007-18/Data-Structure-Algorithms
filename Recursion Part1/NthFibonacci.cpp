#include <iostream>
using namespace std;

int nth_fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    return nth_fibonacci(n - 1) + nth_fibonacci(n - 2);
}
int main()
{
    cout << nth_fibonacci(5);
    return 0;
}
