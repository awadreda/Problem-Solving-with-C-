// max of num
#include <iostream>
using namespace std;

void ReadNumber(int &num1, int &num2, int &num3)
{
  cout << "Enter num1\n";
  cin >> num1;
  cout << "Enter num2\n";
  cin >> num2;
  cout << "Enter num3\n";
  cin >> num3;
}

int MaxOfNums(int num1, int num2, int num3)
{
  if (num1 > num2)
  {
    if (num1 > num3)
    {
      return num1;
    }
    else
    {
      return num3;
    }
  }
  else
  {
    if (num2 > num3)
    {
      return num2;
    }
    else
      return num3;
  }
}

void Print(int max)
{
  cout << "The max number is : " << max;
}

int main()
{
  int num1, num2, num3;
  ReadNumber(num1, num2, num3);
  Print(MaxOfNums(num1, num2, num3));
  return 0;
}