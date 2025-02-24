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

int main()
{

  int Nubmer = ReadPositiveNum("Enter Nubmer 1 ");
  int Nubmer2 = ReadPositiveNum("Enter Nubmer 2 ");
  cout << "===============================\n";
  cout << "Digit " << Nubmer2 << " Frequency is : ";
  cout << TimesDigits(Nubmer, Nubmer2);
  return 0;
}