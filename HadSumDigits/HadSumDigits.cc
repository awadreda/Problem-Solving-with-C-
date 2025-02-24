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

int SumDigits(int num)
{
  int Remainder = 0, sum = 0;
  while (num > 0)
  {
    Remainder = num % 10;
    num = num / 10;
    sum += Remainder;
  }
  return sum;
}

int main()
{
  cout << "The Sum of The Digits of the number : " << SumDigits(ReadPositiveNum("Enter a Positive number"));
  return 0;
}