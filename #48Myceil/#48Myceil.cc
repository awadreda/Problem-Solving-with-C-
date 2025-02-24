#include <iostream>
using namespace std;
#include <cmath>


float MyCeil(float num)
{
  if (abs(num) > int(num))
  {
    if (num > 0)
    {
      return int(num) + 1;
    }
    else
    {
      return (int)num;
    }
  }
  else
    return num;
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

  cout << "My Ceil Is : " << MyCeil(num) << "\n";
  cout << "C++ Ceil Is : " << ceil(num) << "\n";

  return 0;
}