#include <iostream>
using namespace std;

int ReadPositiveNum(string message)
{
  int Num;
  do
  {
    cout << message << "\n";
    cin >> Num;
  } while (Num <= 0);
  return Num;
}

void PrintSumDigits(int num)
{
  int Remainder = 0;
  int sum = 0;
  while (num > 0)
  {
    Remainder = num % 10;
    num = num / 10;

    sum += Remainder;
  }
  cout << "The Sum of Digits is : " << sum << "\n";
}

int main()
{
  PrintSumDigits(ReadPositiveNum("Enter a Positive number"));
  return 0;
}