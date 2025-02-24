#include <iostream>
#include <math.h>
using namespace std;

enum enPrime
{
  prime = 1,
  NotPrime = 2
};

float ReadPositiveNum(string message)
{
  float Num;
  do
  {
    cout << message << "\n";
    cin >> Num;
  } while (Num <= 0);
  return Num;
}

enPrime CheckPrime(int num)
{
  int m = round(num / 2);
  for (int i = 2; i <= m; i++)
  {
    if (num % i == 0)
    {
      return enPrime::NotPrime;
    }
  }
  return enPrime::prime;
}

void PrintPrime(int num)
{
  switch (CheckPrime(num))
  {
  case enPrime::NotPrime:
    cout << "\nNot Prime number\n";
    break;
  case enPrime::prime:
    cout << "\nPrime\n";
    break;
  }
}

int main()
{
  PrintPrime(ReadPositiveNum("Enter apositive number"));
  return 0;
}