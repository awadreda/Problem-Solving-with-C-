#include <iostream>
using namespace std;

int ReadPoitive(string message)
{
  int num;
  do
  {
    cout << message << "\n";
    cin >> num;
  } while (num <= 0);
  return num;
}

int Random(int from, int to)
{
  int random = rand() % (to - from + 1) + from;
  return random;
}

void FillRandonNumss(int arr[100], int arrlength)
{
  for (int i = 0; i < arrlength; i++)
  {
    arr[i] = Random(1, 100);
  }
}

void Reverse(int arrSource[100], int arrReverse[100], int arrlength)
{
  int Count = arrlength;
  for (int i = 0; i < arrlength; i++)
  {
    Count--;
    arrReverse[Count] = arrSource[i];
  }
}

void PrintArray(int arr[100], int arrlenght)
{
  for (int i = 0; i < arrlenght; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

int main()
{
  // seeds to genrate random number in C++ Call only once
  int arr[100];
  int arrlength = ReadPoitive("Enter the Number of Elements ");
  FillRandonNumss(arr, arrlength);
  cout << "Array 1 Elements : \n";
  PrintArray(arr, arrlength);

  int arr2[100];
  Reverse(arr, arr2, arrlength);
  cout << "=======================\n";
  cout << "Array after reverse \n";
  PrintArray(arr2, arrlength);

  return 0;
}
