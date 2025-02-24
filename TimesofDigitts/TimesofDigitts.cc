#include <iostream>
using namespace std;

string ReadNum(string message)
{
  string Num;

  cout << message << "\n";
  cin >> Num;

  return Num;
}

char ReadChar()
{
  cout << "Enter The number (Char)\n";
  char x;
  cin >> x;
  return x;
}
int DigitsTimes(string num, char s)
{

  int Counter = 0;
  for (int i = 0; i < num.length(); i++)
  {
    if (s == num[i])
    {
      Counter++;
    }
  }
  return Counter;
}

int main()
{
  cout << DigitsTimes(ReadNum("Enter The Nubmer"), ReadChar());

  return 0;
}