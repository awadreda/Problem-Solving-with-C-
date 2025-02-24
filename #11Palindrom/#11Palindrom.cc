#include <iostream>
using namespace std;

enum enPalindrome
{
  Palindrome = 1,
  NotPalindrome = 2
};

int ReadPositiveNum(string message)
{
  int num;
  do
  {
    cout << message << "\n";
    cin >> num;
  } while (num <= 0);
  return num;
}

int ReveseNum(int num)
{
  int Remainder = 0, Revese = 0;
  while (num > 0)
  {
    Remainder = num % 10;
    num = num / 10;
    Revese = Revese * 10 + Remainder;
  }
  return Revese;
}

enPalindrome IsPalindrome(int num)
{
  int NumAfterReverse = ReveseNum(num);
  if (num == NumAfterReverse)
    return enPalindrome::Palindrome;
  else
    return enPalindrome::NotPalindrome;
}

void PrintPalindrom(int num)
{
  switch (IsPalindrome(num))
  {
  case enPalindrome::Palindrome:
    cout << "yes , it's a Palindrome Number \n";
    break;
  case enPalindrome::NotPalindrome:
    cout << "No ,it's Not Palindrome number \n";
    break;
  }
}

int main()
{
  PrintPalindrom(ReadPositiveNum("Enter a Positive Nubmer "));
  return 0;
}