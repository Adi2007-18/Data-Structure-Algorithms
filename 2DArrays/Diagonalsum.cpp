#include <iostream>
using namespace std;
// Time Complexity = O(n)
// This question can also be done by using two loops but the time complexity will be O(n^2)
int diagonal_sum(int matrix[][3], int n, int m)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += matrix[i][i]; // to calculate Primary Diagonal elements
        int j = n - i - 1;
        if (i != j) // to calculate Secondary Diagonal elements
        {
            sum += matrix[i][j];
        } /*  Since for our common element the condition ( i != j ) will not be satisfied so it will not be considered in our secondary
          diagonal sum and hece will be added only once*/
    }
    cout << "The sum of Diagonal elements is= " << sum;
    return sum;
}

int main()
{
    int matrix[][3] = {{1, 2, 3},
                       {4, 5, 6},
                       {7, 8, 9}};
    diagonal_sum(matrix, 3, 3);
    return 0;
}