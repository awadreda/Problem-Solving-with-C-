#include <iostream>

using namespace std;
#include <cmath>

float MyRound(float num)
{
  float Remainder = 0;
  Remainder = num - (int)num;
  num = (int)num;
  if (abs(Remainder) >= 0.5)
  {
    if (num > 0)
    {
      return num + 1;
    }
    else
    {
      return num - 1;
    }
  }
  else
  {
    return num;
  }
}

float ReadNumber()
{
  float Number;
  cout << "Please enter a number?";
  cin >> Number;
  return Number;
}

int main()
{
  float num = ReadNumber();
  cout << "My round : " << MyRound(num) << "\n";
  cout << "C++ round : " << round(num) << "\n";

  return 0;
}