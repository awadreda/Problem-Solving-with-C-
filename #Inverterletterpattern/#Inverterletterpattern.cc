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

void PrintLetterPattern(int num)
{
  for (int i = num + 64; i >= 65; i--)
  {
    for (int j = i; j >= 65; j--)
    {
      cout << char(i);
    }
    cout << "\n";
  }
}

int main()
{
  PrintLetterPattern(3);
  return 0;
}