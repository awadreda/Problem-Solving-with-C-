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

int MinNum(int arr[100], int arrlength)
{
  int min =100 ;

  for (int i = 0; i < arrlength; i++)
  {
    if (arr[i] < min)
    {
      min= arr[i];
    }
  }
  return min;
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
  cout << "\n The Minmam num\n";
  cout << MinNum(arr, arrlength);
  return 0;
}