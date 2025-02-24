#include <iostream>
using namespace std;

enum enOperationtype
{
  Add = '+',
  subtract = '-',
  multiply = '*',
  divide = '/'
};

float ReadNum(string message)
{

  float num;
  cout << message << "\n";
  cin >> num;
  return num;
}

enOperationtype ReadOp()
{
  char op;
  cout << "Enter The Operation (+,-,*,/)\n";
  cin >> op;
  return (enOperationtype)op;
}

float Calculta(float num1, float num2, enOperationtype Op)
{

  cout << "The Result is : ";
  switch (Op)
  {
  case enOperationtype::Add:
    return num1 + num2;
  case enOperationtype::subtract:
    return num1 - num2;
  case enOperationtype::multiply:
    return num1 * num2;
  case enOperationtype::divide:
    return num1 * num2;
  default:
    return num1 + num2;
  }
}

int main()
{
  float num1 = ReadNum("Enter  Number1 ");
  float num2 = ReadNum("Enter  Number1 ");
  enOperationtype Op = ReadOp();
  cout << Calculta(num1, num2, Op);

  return 0;
}