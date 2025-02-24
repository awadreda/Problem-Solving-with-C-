#include <iostream>
using namespace std;

void AddArrayElement(int Number, int arr[100], int &arrLength)
{ // its a new element so we need to add the length by 1

  arrLength++;
  arr[arrLength - 1] = Number;
}

void CopyDistinctElement(int arrSource[100], int arrDestination[100], int arrLength, int &arrDestinationLength)
{
  for (int i = 0; i < arrLength; i++)
    if (arrSource[i] != arrSource[i + 1])
    {
      AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
    }
}

void PrintArray(int arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
    cout << arr[i] << " ";
  cout << "\n";
}

int main()
{
  int arr[100] = {10, 10, 10, 50, 50, 70, 70, 70, 90};
  int arrlength = 9;
  int arr2[100], arr2length = 0;
  CopyDistinctElement(arr, arr2, arrlength, arr2length);
  cout << "the element of Array 1\n";
  PrintArray(arr, arrlength);
  cout << "==========================\n";
  cout << "the element of Array 2\n";
  PrintArray(arr2, arr2length);

  return 0;
}