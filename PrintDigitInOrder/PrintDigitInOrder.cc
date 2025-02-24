#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
  int Number = 0;
  do
  {
    cout << Message << endl;
    cin >> Number;
  } while (Number <= 0);
  return Number;
}

int ReverseDigit(int num)
{
  int Remainder = 0, Reverse = 0;
  while (num > 0)
  {
    Remainder = num % 10;
    num = num / 10;
    Reverse = Reverse * 10 + Remainder;
  }
  return Reverse;
}

void PrintDigitsInOrder(int num)
{
  int Remainder = 0;
  while (num > 0)
  {
    Remainder = num % 10;
    num = num / 10;
    cout << Remainder << "\n";
  }
}

int main()
{
  int Number = ReadPositiveNumber("Enter a positive number");
  PrintDigitsInOrder(ReverseDigit(Number));

  return 0;
}