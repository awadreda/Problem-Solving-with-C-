#include <iostream>
using namespace std;

int ReadNumber()
{
  int num;
  cout << "Enter number\n";
  cin >> num;
  return num;
}

float HalfNumber(int num)
{
  return (float)num / 2;
  ;
}

void PrintHalf(int num)
{
  string Result = "";
  Result = "the half of " + to_string(num) + " is " + to_string(HalfNumber(num));

  cout << Result;
}

int main()
{
  PrintHalf(ReadNumber());
  return 0;
}