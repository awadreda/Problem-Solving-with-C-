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

void MultiplyMitrixes(int arr1[3][3], int arr2[3][3], int arrMultiply[3][3], int Rows, int Cols)
{
  for (short i = 0; i < Rows; i++)
  {
    for (short j = 0; j < Cols; j++)
    {
      arrMultiply[i][j] = arr1[i][j] * arr2[i][j];
    }
  }
}

int main()
{
  // seeds The Random Number geneartor In C++
  srand((unsigned)time(NULL));
  int arr1[3][3], arr2[3][3], arrMultiply[3][3];

  FillMatrixWithRandomNubmer(arr1, 3, 3);
  FillMatrixWithRandomNubmer(arr2, 3, 3);
  MultiplyMitrixes(arr1, arr2, arrMultiply, 3, 3);
  cout << "\nMatrix1\n";
  PrintMatrix(arr1, 3, 3);
  cout << "\nMatrix2\n";
  PrintMatrix(arr2, 3, 3);
  cout << "\nResults\n";
  PrintMatrix(arrMultiply, 3, 3);

  return 0;
}