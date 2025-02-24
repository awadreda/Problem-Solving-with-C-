#include <iostream>
using namespace std;

int ReadPositiveNum(string message)
{
  int num;
  do
  {
    cout << message << "\n";
    cin >> num;
  } while (num <= 0);
  return num;
}

void PrintNumPattern(int num)
{
  for (int i = 1; i <= num; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << i;
    }
    cout << "\n";
  }
}

int main()
{
  PrintNumPattern(ReadPositiveNum("Enter Positive number"));
  return 0;
}