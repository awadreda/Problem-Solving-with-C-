#include <iostream>
using namespace std;

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
    arr[i] = RandomNumber(-100, 100);
}

void PrintArray(int arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
    cout << arr[i] << " ";
  cout << "\n";
}

int CountNegative(int arrSource[100], int arrlength)
{
  int count = 0;
  for (int i = 0; i < arrlength; i++)
  {

    if (arrSource[i] < 0)
    {
      count++;
    }
  }
  return count;
}

int main()
{
  // Seeds the random number generator in C++, called only once
  srand((unsigned)time(NULL));
  int arr[100], arrLength;
  FillArrayWithRandomNumbers(arr, arrLength);

  cout << "\nArray 1 elements:\n";
  PrintArray(arr, arrLength);
  cout << "===========================\n";
  cout << "The Number of Negative Elements is : " << CountNegative(arr, arrLength) << "\n";

  return 0;
}