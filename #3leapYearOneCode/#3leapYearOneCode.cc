#include <iostream>
using namespace std;

short ReadNumber()
{
  short Number;
  cout << "\nEnter a Number? ";
  cin >> Number;
  return Number;
}

bool IsLeapYear(short year)
{
  return (year % 400 == 0) ? true : (year % 100 != 0) ? (year % 4 == 0) ? true : false
                                                      : false;
}

int main()
{
  short Year = ReadNumber();
  if (IsLeapYear(Year))
  {
    cout << "\nYes, Year [" << Year << "] is a leap year.\n";
  }
  else
  {
    cout << "\nNo, Year [" << Year << "] is NOT a leap year.\n";
  }

  return 0;
}