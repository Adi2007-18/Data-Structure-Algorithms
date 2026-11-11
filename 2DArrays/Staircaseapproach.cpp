#include <iostream>
using namespace std;

bool staircase_search(int matrix[][4], int n, int m, int key)
{
  int i = 0;
  int j = m - 1;

  while (i < n && j >= 0)
  {
    if (matrix[i][j] == key)
    {
      cout << "Key found at (" << i << "," << j << ")" << endl;

      return true;
    }
    else if (matrix[i][j] < key)
    {
      i++;
    }
    else
    {
      j--;
    }
  }
  cout << "key not found" << endl;
}
int main()
{
  int matrix[][4] = {{10, 20, 30, 40},
                     {15, 25, 35, 45},
                     {27, 29, 37, 48},
                     {32, 33, 39, 50}};

  staircase_search(matrix, 4, 4, 93);
  return 0;
}