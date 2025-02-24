#include <iostream>
using namespace std;

bool IsLeapYear(short year)
{
  return (year % 4 == 0 & year % 100 != 0) || (year % 400 == 0);
}

short NumOfDays(short years)
{
  return (IsLeapYear(years)) ? 366 : 365;
}

short NumOFHours(short year)
{
  return NumOfDays(year) * 24;
}

int NumOFMins(short year)
{
  return NumOFHours(year) * 60;
}

int NumOFsec(short year)
{
  return NumOFMins(year) * 60;
}

short ReadNumber()
{
  short Number;
  cout << "\nEnter The year to check ? ";
  cin >> Number;
  return Number;
}

int main()
{
  short Year = ReadNumber();

  cout << "Number of Days     in Year [" << Year << "] is : " << NumOfDays(Year) << "\n";
  cout << "Number of Hours    in Year [" << Year << "] is : " << NumOFHours(Year) << "\n";
  cout << "Number of Minutes  in Year [" << Year << "] is : " << NumOFMins(Year) << "\n";
  cout << "Number of seconds  in Year [" << Year << "] is : " << NumOFsec(Year) << "\n";

  return 0;
}