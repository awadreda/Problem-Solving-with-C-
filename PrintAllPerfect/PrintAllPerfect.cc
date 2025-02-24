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

void PrintAllPerfect(int n)
{
  cout << "The perfect Numbers from 1 to " << n << "\n";
  for (int i = 1; i < n; i++)
  {

    if (IsPerfect(i))
    {
      cout << i << "\n";
    }
  }
}

int main()
{
  PrintAllPerfect(ReadPositiveNum("please enter positive number"));
  return 0;
}