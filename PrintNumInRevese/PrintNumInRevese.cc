#include <iostream>
using namespace std;

string ReadNum(string message)
{
  string Num;

  cout << message << "\n";
  cin >> Num;
  return Num;
}

string ReverseNum(string num)
{
  string result = "";
  for (int i = num.length() - 1; i >= 0; i--)
  {
    result += num[i];
  }
  return result;
}

void PrintReveseNum(string num)
{
  cout << "The Number Befor Revese : " << num << "\n";
  cout << "The Number After Revese : " << ReverseNum(num) << "\n";
}

int main()
{
  PrintReveseNum(ReadNum("Enter Your Number "));
  return 0;
}