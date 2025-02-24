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

void PrintInvertPattern(int num)
{
  for (int i = num; i > 0; i--)
  {
    for (int j = i; j > 0; j--)
    {
      cout << i;
    }
    cout << "\n";
  }
}

int main()
{
  PrintInvertPattern(ReadPositiveNum("Enter a positive Num"));

  return 0;
}