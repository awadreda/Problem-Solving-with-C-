#include <iostream>
using namespace std;

// Structure to represent a date
struct stDate
{
  short Year;
  short Month;
  short Day;
};

// Function to check if the year is a leap year
bool isLeapYear(short Year)
{
  return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

// Function to get the number of days in a month
short NumberOfDaysInAMonth(short Month, short Year)
{
  if (Month < 1 || Month > 12)
  {
    return 0;
  }
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

stDate AddONEDay(stDate Date)
{
  if (IsLastDayInMonth(Date))
  {
    if (IsLastMonthInYear(Date.Month))
    {
      Date.Day = 1;
      Date.Month = 1;
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

// Function to read a complete date (day, month, and year) from the user
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
  // Read a date from the user
  stDate Date1 = ReadFullDate();

  Date1 = AddONEDay(Date1);
  cout << "Date After Adding One Day : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << "\n";
  return 0;
}
