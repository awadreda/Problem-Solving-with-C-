#include <iostream>
using namespace std;

float ReadNum(string message)
{
  float num;
  do
  {
    cout << message << "\n";
    cin >> num;
  } while (num <= 0);
  return num;
}

float TotalPaid(float paid)
{
  cout << "The total Bill after services sales taxes is  : ";
  paid = paid * 1.1;
  paid = paid * 1.16;
  return paid;
}

int main()
{

  float Paid = ReadNum("Enter positive num");
  cout << TotalPaid(Paid) << "\n";
  return 0;
}