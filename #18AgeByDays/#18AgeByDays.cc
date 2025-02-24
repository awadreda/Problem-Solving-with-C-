#pragma warning(disable : 4996)
#include <ctime>
#include <iostream>
using namespace std;

// Define a structure to represent a date
struct stDate
{
  short Year;
  short Month;
  short Day;
};

// Function to check if a year is a leap year
bool isLeapYear(short Year)
{
  return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

// Function to check if Date1 is before Date2
bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
  return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

// Function to get the number of days in a month
short NumberOfDaysInAMonth(short Month, short Year)
{
  if (Month < 1 || Month > 12)
    return 0;

  int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}

// Function to check if a date is the last day in the month
bool IsLastDayInMonth(stDate Date)
{
  return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
}

// Function to check if a month is the last month in the year
bool IsLastMonthInYear(short Month)
{
  return (Month == 12);
}

// Function to increase a date by one day
stDate IncreaseDateByOneDay(stDate Date)
{
  if (IsLastDayInMonth(Date))
  {
    if (IsLastMonthInYear(Date.Month))
    {
      Date.Month = 1;
      Date.Day = 1;
      Date.Year++;
    }
    else
    {
      Date.Day = 1;
      Date.Month++;
    }
  }
  else
  {
    Date.Day++;
  }
  return Date;
}

// Function to get the difference in days between two dates
int GetDifferenceInDays(stDate Date1, stDate Date2, bool IncludeEndDay = false)
{
  int Days = 0;
  while (IsDate1BeforeDate2(Date1, Date2))
  {
    Days++;
    Date1 = IncreaseDateByOneDay(Date1);
  }
  return IncludeEndDay ? ++Days : Days;
}

int YourAgeByDays(stDate Date, bool IncludeEndDay = false)
{
  int Days = 0;
  time_t t = time(0);
  tm *Now = localtime(&t);
  stDate DateNow;
  DateNow.Year = Now->tm_year + 1900;
  DateNow.Month = Now->tm_mon + 1;
  DateNow.Day = Now->tm_mday;

  while (IsDate1BeforeDate2(Date, DateNow))
  {
    Days++;
    Date = IncreaseDateByOneDay(Date);
  }
  return IncludeEndDay ? ++Days : Days;
}

// Function to read the day from the user
short ReadDay()
{
  short Day;
  cout << "\nPlease enter a Day? ";
  cin >> Day;
  return Day;
}

// Function to read the month from the user
short ReadMonth()
{
  short Month;
  cout << "Please enter a Month? ";
  cin >> Month;
  return Month;
}

// Function to read the year from the user
short ReadYear()
{
  short Year;
  cout << "Please enter a Year? ";
  cin >> Year;
  return Year;
}

// Function to read a full date from the user
stDate ReadFullDate()
{
  stDate Date;
  Date.Day = ReadDay();
  Date.Month = ReadMonth();
  Date.Year = ReadYear();
  return Date;
}

int main()
{
  stDate Date1 = ReadFullDate();
  // stDate Date2 = ReadFullDate();

  // Calculate the difference in days between the two dates
  cout << "\nYour Age BY Days is :  " << YourAgeByDays(Date1) << " Day(s).";

  // Calculate the difference in days (including the end day) between the two dates
  cout << "\nDifference (Including End Day) is: " << YourAgeByDays(Date1, true) << " Day(s).";

  system("pause>0");

  return 0;
}
