#include <iostream>
#include <cmath>
#include <string>
using namespace std;

enum enPrime
{
  Prime = 1,
  NotPrime = 2
};

float ReadNum(string message)
{
  float num;
  do
  {
    cout << message << "\n";
    cin >> num;
  } while (num <= 0);
  return num;
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
  return enPrime::Prime;
}

void PrintPrime(int num)
{
  switch (CheckPrime(num))
  {
  case enPrime::NotPrime:
    cout << "\n This number is NotPrime\n";
    break;
  case enPrime::Prime:
    cout << "\n This nubmer is Prime \n";
    break;
  }
}

int main()
{
  PrintPrime(ReadNum("Enter a Positive nubmer"));
  return 0;
}