
#include <iostream>
using namespace std;

bool IsLeapYear(short year)
{
  return (year % 4 == 0 & year % 100 != 0) || (year % 400 == 0);
}

short MonthDays(short month, short year)
{
  return (IsLeapYear(year) && month == 2) ? 29 : (month == 2 && !(IsLeapYear(year))) ? 28
                                                                                     : 30;
}

short NumOFHours(short year, short Montth)
{
  return MonthDays(year, Montth) * 24;
}

int NumOFMins(short year, short month)
{
  return NumOFHours(year, month) * 60;
}

int NumOFsec(short year, short month)
{
  return NumOFMins(year, month) * 60;
}

short ReadNumber()
{
  short Number;
  cout << "\nEnter The year to check ? ";
  cin >> Number;
  return Number;
}

short ReadMounth()
{
  short Number;
  cout << "\nEnter The The MOunth to check ? ";
  cin >> Number;
  return Number;
}

int main()
{
  short Year = ReadNumber();
  short month = ReadMounth();

  cout << "Number of Days     in Month [" << month << "] is : " << MonthDays(month, Year) << "\n";
  cout << "Number of Hours    in Month [" << month << "] is : " << NumOFHours(month, Year) << "\n";
  cout << "Number of Minutes  in Month [" << month << "] is : " << NumOFMins(month, Year) << "\n";
  cout << "Number of seconds  in Month [" << month << "] is : " << NumOFsec(month, Year) << "\n";

  return 0;
}