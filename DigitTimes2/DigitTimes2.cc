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

int TimesDigits(int num, int x)
{
  int Remainder = 0, Counter = 0;

  while (num > 0)
  {
    Remainder = num % 10;
    num = num / 10;
    if (Remainder == x)
    {
      Counter++;
    }
  }
  return Counter;
}

int NumDigit(int n)
{
  int Remainder = 0, Counter = 0;
  while (n > 0)
  {
    Remainder = n % 10;
    n = n / 10;
    Counter++;
  }
  return Counter;
}

void PrintDigits(int num)
{
  // int Remainder = 0;
  for (int i = 0; i < 10; i++)
  {
    short DigitFrequency = 0;
    DigitFrequency = TimesDigits(i, num);
    if (DigitFrequency > 0)
    {

      cout << "Digit " << i << " Frequncy is  :  "
           << DigitFrequency << "Time(s)\n";
    }

    // Remainder = num % 10;
    // num = num / 10;
  }
}

int main()
{
  int number = ReadPositiveNum("Enter The Main Number \n");
  PrintDigits(number);
  return 0;
}
