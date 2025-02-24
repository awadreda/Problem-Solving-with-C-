#include <iostream>
using namespace std;
#include <cmath>

float Myabs(float num)
{
  if (num < 0)
  {
    return num * -1;
  }
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

  cout << "My abs : " << Myabs(num) << "\n";
  cout << "C++ abs : " << abs(num) << "\n";

  return 0;
}