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

void PrintDigits(int num)
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
  PrintDigits(ReadPositiveNum("Enter a Positive number"));
  return 0;
}