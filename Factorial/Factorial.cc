// Factorial
#include <iostream>
using namespace std;

int ReadPostive(string message)
{
  int num;

  do
  {
    cout << message << "\n";
    cin >> num;
  } while (num <= 0);
  return num;
}

int Factorial(int num)
{
  cout << "The factoreilal is :";
  int fac = 1;
  for (int i = num; i >= 1; i--)
  {
    fac = fac * i;
  }
  return fac;
}

int main()
{
  cout << Factorial(ReadPostive("Enter Positive number")) << "\n";

  return 0;
}