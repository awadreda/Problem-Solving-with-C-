// swap
#include <iostream>
using namespace std;

void ReadNum(int &num1, int &num2)
{
  cout << "Enter Number 1\n";
  cin >> num1;
  cout << "Enter Number 2\n";
  cin >> num2;
}

void swap(int &num1, int &num2)
{
  int temp;
  temp = num1;
  num1 = num2;
  num2 = temp;
}

void PrintNums(int num1, int num2)
{
  cout << "Your 1st Number is : " << num1 << "\n";
  cout << "Your 2st Number is : " << num2 << "\n";
}

int main()
{
  int num1, num2;
  ReadNum(num1, num2);
  PrintNums(num1, num2);
  swap(num1, num2);
  cout << "\n=================================\n";
  PrintNums(num1, num2);

  return 0;
}