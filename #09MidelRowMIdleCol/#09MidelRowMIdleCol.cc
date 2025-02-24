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

void PrintRows(int arr[3][3], int RowNum, int Cols)
{
  for (short i = 0; i < Cols; i++)
  {
    printf("%0*d      ", 2, arr[RowNum - 1][i]);
  }
  cout << "\n";
}

void PrintCols(int arr[3][3], int Rows, int ColsNum)
{
  for (short i = 0; i < Rows; i++)
  {
    printf("%0*d \n", 2, arr[i][ColsNum - 1]);
  }
  cout << "\n";
}

int main()
{
  srand((unsigned)time(NULL));
  int arr[3][3];
  FillMatrixWithRandomNubmer(arr, 3, 3);
  PrintMatrix(arr, 3, 3);
  cout << "The midle Row in the matrix\n";
  PrintRows(arr, 2, 3);
  cout << "The midle Col in the matrix\n";
  PrintCols(arr, 3, 2);

  return 0;
}