#include <iostream>
using namespace std;
#include <iomanip>
#include <string>

void FillMatrixOrdered(int arr[3][3], short Row, short Cols)
{
  int order = 0;
  for (short i = 0; i < Row; i++)
  {
    for (short j = 0; j < Cols; j++)
    {
      order += 1;
      arr[i][j] = order;
    }
  }
}

void PrintMatrix(int arr[3][3], short rows, short cols)
{
  for (short i = 0; i < rows; i++)
  {
    for (short j = 0; j < cols; j++)
    {
      cout << setw(3) << arr[i][j] << "    ";
    }
    cout << "\n";
  }
}

void TransPosedMatrix(int arr[3][3], int arrTransPosed[3][3], short Row, short Cols)
{
  for (short i = 0; i < Row; i++)
  {
    for (short j = 0; j < Cols; j++)
    {
      arrTransPosed[j][i] = arr[i][j];
    }
  }
}

int main()
{
  int arr[3][3];
  int arrTrans[3][3];
  FillMatrixOrdered(arr, 3, 3);
  PrintMatrix(arr, 3, 3);
  TransPosedMatrix(arr, arrTrans, 3, 3);
  cout << "\nThe Following is Transposed Matrix\n";
  PrintMatrix(arrTrans, 3, 3);
  return 0;
}