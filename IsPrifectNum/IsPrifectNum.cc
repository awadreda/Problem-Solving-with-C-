#include <iostream>
using namespace std;

enum enPerfect
{
  Perfect = 1,
  NotPerfect = 2
};

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

enPerfect IsPerfect(int num)
{
  int sum = 0;
  int m = num / 2;
  for (int i = 1; i <= m; i++)
  {
    if (num % i == 0)
    {
      sum += i;
      if (sum == num)
      {
        return enPerfect::Perfect;
      }
    }
  }
  return enPerfect::NotPerfect;
}

void PrintPerfect(int n)
{

  switch (IsPerfect(n))
  {
  case enPerfect::Perfect:
    cout << "It's a Perfect number \n";
    break;
  case enPerfect::NotPerfect:
    cout << "It's Not a Perfect Number \n";
    break;
  }
}

int main()
{
  PrintPerfect(ReadPositiveNum("Enter a Positive nubmer "));
  return 0;
}