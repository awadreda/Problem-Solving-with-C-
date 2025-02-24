#include <iostream>
#include <string>
#include <iomanip>

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
      arr[i][j] = RandomNumber(1, 100);
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

int main()
{

  // Seeds the random number generator in C++ ,called only once
  srand((unsigned)time(NULL));
  int arr[3][3];
  FillMatrixWithRandomNubmer(arr, 3, 3);
  cout << "\n The follow is a 3x3 random matrix: \n";
  PrintMatrix(arr, 3, 3);
  system("pause>0");
  return 0;
}
