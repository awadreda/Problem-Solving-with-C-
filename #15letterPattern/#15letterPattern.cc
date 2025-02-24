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

void PrintLetterpattern(int num)
{
  for (int i = 65; i < num + 65; i++)
  {
    for (int j = 65; j <= i; j++)
    {
      cout << char(i);
    }
    cout << "\n";
  }
}

int main()
{
  PrintLetterpattern(ReadPositiveNum("Enter Positive number "));
  return 0;
}