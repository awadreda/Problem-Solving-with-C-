// Simple calculater
#include <iostream>
using namespace std;

enum enOperation
{
  Add = '+',
  Subtract = '-',
  Multiply = '*',
  Divide = '/'
};

float ReadNum(string message)
{
  float num;
  cout << message << "\n";
  cin >> num;
  return num;
}

enOperation ReadOp()
{
  char Op;
  cout << "Enter The Operation ( +,-,*,/)) \n";
  cin >> Op;
  return (enOperation)Op;
}

float Calc(float num1, float num2, enOperation OpType)
{
  cout << "\nThe Result is  : ";
  switch (OpType)
  {
  case enOperation::Add:
    return num1 + num2;
  case enOperation::Subtract:
    return num1 - num2;
  case enOperation::Multiply:
    return num1 * num2;
  case enOperation::Divide:
    return num1 / num2;
  default:
    return num1 + num2;
  }
}

int main()
{

  float num1 = ReadNum("Enter Number1 ");
  float num2 = ReadNum("Enter Number2 ");
  enOperation Op = ReadOp();
  cout << Calc(num1, num2, Op);
  return 0;
}