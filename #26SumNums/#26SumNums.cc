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

int main()
{
  srand((unsigned)time(NULL));
  int arr[100], arrlength;
  FillArrayWithRandomNum(arr, arrlength);
  cout << "========================\n";
  cout << "Elemnt of arry \n";
  PrintArray(arr, arrlength);
  cout << "========================\n";
  cout << "\nThe Maxmum Number \n";
  cout << maxNum(arr, arrlength);
  cout << "========================\n";
  cout << "\n The Minmum num\n";
  cout << MinNum(arr, arrlength);
  cout << "========================\n";
  cout << "Sum of the number of array \n";
  cout << SumOFArrayNUm(arr, arrlength);
  cout << "========================\n";
  return 0;
}