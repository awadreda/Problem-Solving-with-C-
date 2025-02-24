#include <iostream>
using namespace std;
#include <cmath>

float Myfloor(float num)
{
  if (num < 0)
  {
    if (num > (int)num)
    {
      return (int)num - 1;
    }
    else
    {
      return (int)num;
    }
  }
  else
  {

    return (int)num;
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
  cout << "My floor is : " << Myfloor(num) << "\n";
  cout << "C++ floor is : " << floor(num) << "\n";

  return 0;
}