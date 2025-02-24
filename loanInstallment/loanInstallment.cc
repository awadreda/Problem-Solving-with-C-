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

float numberOfMonth(float loanAmount, float monthlypaid)
{

  return loanAmount / monthlypaid;
}

int main()
{
  float loanAmount = ReadNum("Enter The Amount of loan");
  float MonthlyPaid = ReadNum("Enter the Monthly paid");
  cout << numberOfMonth(loanAmount, MonthlyPaid);
  return 0;
}