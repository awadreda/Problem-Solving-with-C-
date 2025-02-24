#include <iostream>
using namespace std;
#include <cmath>

float MySqr(float num)
{
  return pow(num, .5);
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
  cout << "Mysqrt :" << MySqr(num) << "\n";
  cout << "C++ sqrt :" << sqrt(num) << "\n";

  return 0;
}