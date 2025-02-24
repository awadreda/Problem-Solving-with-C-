#include <iostream>
using namespace std;

int ReadPositiveNum(string messages)
{
  int num;
  do
  {
    cout << messages << "\n";
    cin >> num;
  } while (num <= 0);
  return num;
}

int CountDigits(int num, int x)
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

void PrintAllDigits(int num)
{
  for (int i = 0; i < 10; i++)
  {
    cout << endl;
    int digits = 0;
    digits = CountDigits(i, num);
    if (digits > 0)
    {
      cout << "Digit " << i << " frequncey is : " << digits << "Time(s)\n";
    }
  }
}

int main()
{
  int num = ReadPositiveNum("Enter A positive number ");
  PrintAllDigits(num);
  return 0;
}