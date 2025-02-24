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

bool IsPerfect(int n)
{

  int sum = 0;
  for (int i = 1; i < n; i++)
  {
    if (n % i == 0)
    {
      sum += i;
    }
  }
  return sum == n;
}

void PrintPerfect(int n)
{
  if (IsPerfect(n))
  {
    cout << n << "   is fucken Perfect ";
  }
  else
    cout << n << "  is not Perfect ";
}

int main()
{
  PrintPerfect(ReadPositiveNum("Enter a positive number"));

  return 0;
}