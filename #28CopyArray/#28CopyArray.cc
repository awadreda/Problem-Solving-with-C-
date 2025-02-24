#include <iostream>
using namespace std;
#include <algorithm>

int RandomNum(int from, int to)
{
  int random;
  random = rand() % (to - from + 1) + from;
  return random;
}

void FillArrayWithRandomNum(int arr[100], int &arrlength)
{
  cout << "Enter Nubmer of elemnets \n";
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

int maxNum(int arr[100], int arrlength)
{
  int max = 0;
  for (int i = 0; i < arrlength; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  return max;
}

int MinNum(int arr[100], int arrlength)
{
  int min = 0;
  min = arr[0];
  for (int i = 0; i < arrlength; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }
  return min;
}

int SumOFArrayNUm(int arr[100], int arrlength)
{
  int sum = 0;
  for (int i = 0; i < arrlength; i++)
  {
    sum += arr[i];
  }
  return sum;
}

float AverageNum(int arr[100], int arrlength)
{

  return (float)SumOFArrayNUm(arr, arrlength) / arrlength;
}

void FillCopyArray(int arr[100], int arrlength)
{
  int arrCopy[100];

  for (int i = 0; i < arrlength; i++)
  {
    arrCopy[i] = arr[i];
  }
  for (int j = 0; j < arrlength; j++)
  {
    cout << arrCopy[j] << " ";
  }
}

int main()
{
  int arrCopy[100];
  srand((unsigned)time(NULL));
  int arr[100], arrlength;
  FillArrayWithRandomNum(arr, arrlength);
  cout << "\n========================\n";
  cout << "Elemnt of arry \n";
  PrintArray(arr, arrlength);
  cout << "\n========================\n";
  cout << "\nThe Maxmum Number \n";
  cout << maxNum(arr, arrlength);
  cout << "\n========================\n";
  cout << "\n The Minmum num\n";
  cout << MinNum(arr, arrlength);
  cout << "\n========================\n";
  cout << "Sum of the number of array \n";
  cout << SumOFArrayNUm(arr, arrlength);
  cout << "\n========================\n";
  cout << "The Average of Nubmer of array\n";
  cout << AverageNum(arr, arrlength);
  cout << "\n========================\n";
  cout << "Copy of Array \n ";
  FillCopyArray(arr, arrlength);
  return 0;
}