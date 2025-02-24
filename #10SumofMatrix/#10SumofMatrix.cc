#include <iostream>
#include <string>
#include <iomanip>
#include <cstdio>

using namespace std;

int RandomNumber(int from, int to)
{
  // functon to generate a random number
  int random = rand() % (to - from + 1) + from;
  return random;
}

void FillMatrixWithRandomNubmer(int arr[3][3], short rows, short cols)
{
  for (short i = 0; i < rows; i++)
  {
    for (short j = 0; j < cols; j++)
    {
      arr[i][j] = RandomNumber(1, 10);
    }
  }
}

void PrintMatrix(int arr[3][3], short rows, short cols)
{
  for (short i = 0; i < rows; i++)
  {
    for (short j = 0; j < cols; j++)
    {
      printf("%0*d      ", 2, arr[i][j]);
      // cout << setw(3) << arr[i][j] << "    ";
    }
    cout << "\n";
  }
}

void SumOFTheMatrix(int arr[3][3], short rows, short cols)
{
  int sum = 0;
  for (short i = 0; i < rows; i++)
  {
    for (short j = 0; j < cols; j++)
    {
      sum += arr[i][j];
    }
  }
  cout << "Sum of the matrix is : " << sum << "\n";
}

int main()
{
  // seeds of generator random number in C++
  srand((unsigned)time(NULL));
  int arr[3][3];
  FillMatrixWithRandomNubmer(arr, 3, 3);
  PrintMatrix(arr, 3, 3);
  SumOFTheMatrix(arr, 3, 3);

  return 0;
}