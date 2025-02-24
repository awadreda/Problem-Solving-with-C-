#include <iostream>
using namespace std;

enum enPirme
{
  prime = 1,
  NotPrime
};

int RandomNumber(int From, int To)
{ // Function to generate a random numberint
  int randNum = rand() % (To - From + 1) + From;
  return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
{
  cout << "\nEnter number of elements:\n";
  cin >> arrLength;
  for (int i = 0; i < arrLength; i++)
    arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
    cout << arr[i] << " ";
  cout << "\n";
}

void AddArrayElement(int Number, int arr[100], int &arrLength)
{ // its a new element so we need to add the length by 1

  arrLength++;
  arr[arrLength - 1] = Number;
}

void CopyArrayUsingAddArrayElement(int arrSource[100], int arrDestination[100], int arrLength, int &arrDestinationLength)
{
  for (int i = 0; i < arrLength; i++)
    AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
}

void CopyOddNum(int arrSource[100], int arrDestination[100], int arrlength, int &arr2length)
{
  for (int i = 0; i < arrlength; i++)
    if (arrSource[i] % 2 != 0)
    {
      AddArrayElement(arrSource[i], arrDestination, arr2length);
    }
}

enPirme IsPrime(int num)
{
  int m = num / 2;
  for (int i = 2; i <= m; i++)
  {
    if (num % i == 0)
    {
      return enPirme::NotPrime;
    }
  }
  return enPirme::prime;
}

void CopyPrimeNum(int arrSource[100], int arrDestination[100], int arrlength, int &arr2length)
{
  for (int i = 0; i < arrlength; i++)
  {
    if (IsPrime(arrSource[i]) == enPirme::prime)
    {
      AddArrayElement(arrSource[i], arrDestination, arr2length);
    }
  }
}

int main()
{
  // Seeds the random number generator in C++, called only once
  srand((unsigned)time(NULL));
  int arr[100], arrLength = 0, arr2Length = 0;
  FillArrayWithRandomNumbers(arr, arrLength);
  int arr2[100];
  CopyPrimeNum(arr, arr2, arrLength, arr2Length);
  // CopyArrayUsingAddArrayElement(arr, arr2, arrLength, arr2Length);
  cout << "\nArray 1 elements:\n";
  PrintArray(arr, arrLength);
  cout << "===========================\n";
  cout << "\nArray 2 elements after copy Prime:\n";
  PrintArray(arr2, arr2Length);
  return 0;
}