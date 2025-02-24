#include <iostream>
using namespace std;

int ReadPositiveNum(string message)
{
  int Num;
  do
  {
    cout << message << "\n";
    cin >> Num;
  } while (Num <= 0);
  return Num;
}

int ReverseNum(int Num)
{
  int Remainder = 0, ReNum = 0;
  while (Num > 0)
  {
    Remainder = Num % 10;
    Num = Num / 10;
    
    ReNum = ReNum * 10 + Remainder;
  }
  return ReNum;
}

void PrintReverse(int num)
{
  cout << "The Nubmer Before Reverse is : " << num << "\n";
  cout << "The Nubmer After Reverse is : " << ReverseNum(num) << "\n";
}

int main()
{
  PrintReverse(ReadPositiveNum("Enter a Positive number"));
  return 0;
}