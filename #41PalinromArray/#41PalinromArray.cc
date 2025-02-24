// Palindrome array
#include <iostream>
using namespace std;

enum enPalindrome
{
  Palindrome = 1,
  NotPalindrome = 2
};

void FillArray(int arr[100], int &arrlength)
{
  arrlength = 6;
  arr[0] = 10;
  arr[1] = 50;
  arr[2] = 30;
  arr[3] = 30;
  arr[4] = 20;
  arr[5] = 10;
}

void PrintArray(int arr[100], int arrlength)
{
  for (int i = 0; i < arrlength; i++)
  {

    cout << arr[i] << " ";
  }
  cout << "\n";
}

enPalindrome ISPalindrome(int arr[100], int arrlength)
{
  int ocunt = 5;
  for (int i = 0; i < arrlength; i++)
  {
    if (arr[i] != arr[ocunt])
    {
      return enPalindrome::NotPalindrome;
      // returin colse the program if it's true
      //  from 1st condition it will close
    }

    ocunt--;
  }
  return enPalindrome::Palindrome;
}

void PrintPalindrome(int arr[100], int arrlength)
{

  switch (ISPalindrome(arr, arrlength))
  {
  case enPalindrome::Palindrome:
  {
    cout << "Yes array is Plaindrome \n";
    break;
  }
  case enPalindrome::NotPalindrome:
  {
    cout << "Not it's not palindrome \n";
    break;
  }
  }
}

int main()
{
  int arr[100], arrlength;
  FillArray(arr, arrlength);
  cout << "Array's element \n";
  PrintArray(arr, arrlength);

  PrintPalindrome(arr, arrlength);

  return 0;
}