#include <iostream>
using namespace std;
#include <cmath>

int RandomNum(int from, int to)
{
  int random = rand() % (to - from + 1) + from;
  return random;
}

void FillArrayRandom(int arr[100], int &arrlength)
{
  cout << "Enter The Nubmer of Elements \n";
  cin >> arrlength;

  for (int i = 0; i < arrlength; i++)
  {
    arr[i] = RandomNum(1, 100);
  }
}

void PrintArray(int arr[100], int arrlength)
{
  for (int i = 0; i < arrlength; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

void SumOfArrays(int arrOne[100], int arrTwo[100], int arrSum[100], int arrlength)
{

  for (int i = 0; i < arrlength; i++)
  {
    arrSum[i] = arrOne[i] + arrTwo[i];
  }
}

int main()
{
  // seeds Random Number genrtion in C++,call only once
  srand((unsigned)time(NULL));

  int arr[100], arrlength;
  FillArrayRandom(arr, arrlength);

  int arr2[100];
  FillArrayRandom(arr2, arrlength);

  int arrSum[100];
  SumOfArrays(arr, arr2, arrSum, arrlength);

  cout << "Array 1 Elements : \n";
  PrintArray(arr, arrlength);
  cout << "======================\n";
  cout << "Array 2 Elements : \n";
  PrintArray(arr2, arrlength);
  cout << "======================\n";
  cout << "Sum of Two arrays : \n";
  PrintArray(arrSum, arrlength);

  return 0;
}