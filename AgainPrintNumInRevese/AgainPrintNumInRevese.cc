#include <iostream>
using namespace std;

string ReadNum(string message)
{
  string Num;

  cout << message << "\n";
  cin >> Num;
  return Num;
}

void ReverseNum(string num)
{
  cout << "The Revese Nubmers is : \n";
  for (int i = num.length() - 1; i >= 0; i--)
  {
    cout << num[i] << "\n";
  };
}

int main()
{
  ReverseNum(ReadNum("Enter Tne Number "));
  return 0;
}