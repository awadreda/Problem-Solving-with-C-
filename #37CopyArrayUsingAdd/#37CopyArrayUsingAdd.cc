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

void AddElement(int num, int arr[100], int &arrlength)
{

  arrlength++;
  arr[arrlength - 1] = num;
}

void CopyAdd(int arrSourse[100], int arrDestination[100], int arrlength, int &arr2length)
{

  for (int i = 0; i < arrlength; i++)
  {
    AddElement(arrSourse[i], arrDestination, arr2length);
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

  int arr2[100], arr2length = 0;
  CopyAdd(arr, arr2, arrlength, arr2length);
  cout << "=======================\n";
  cout << "Array after reverse \n";
  PrintArray(arr2, arrlength);

  return 0;
}