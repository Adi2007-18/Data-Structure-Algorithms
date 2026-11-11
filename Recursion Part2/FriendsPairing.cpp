#include <iostream>
using namespace std;

int pairing(int n)
{
    if (n == 1 || n == 2)
    {
        return n;
    }
    return pairing(n - 1) + (n - 1) * pairing(n - 2);
}
int main()
{
    cout << "The total number of ways are=" << pairing(3);
    return 0;
}