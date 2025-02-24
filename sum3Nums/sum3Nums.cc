// sum3Nums
#include <iostream>
using namespace std;

struct stNums
{
  int num1;
  int num2;
  int num3;
};

stNums ReadNums()
{
  stNums N;
  cout << "Enter the 1st Number \n";
  cin >> N.num1;
  cout << "Enter the 1st Number \n";
  cin >> N.num2;
  cout << "Enter the 1st Number \n";
  cin >> N.num3;

  return N;
}

int SumNums(stNums nom)
{
  return nom.num1 + nom.num2 + nom.num3;
}

float CalcAverge(stNums nom)
{
  return (float)SumNums(nom) / 3;
}

void PrintSum(stNums nums)
{
  cout << "The sum of numbers is  : " << SumNums(nums);
}

void PrintAverge(stNums nums)
{
  cout << "the averge is : " << CalcAverge(nums);
}


int main()
{

  PrintAverge(ReadNums());
  return 0;
}