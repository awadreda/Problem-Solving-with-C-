#include <iostream>
using namespace std;

// Struct to represent a date
struct sDate
{
  short Year;
  short Month;
  short Day;
};

bool isLeapYear(short Year)
{
  return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
  if (Month < 1 || Month > 12)
    return 0;

  int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}

short NumberOfDaysFromTheBeginningOfYear(short Day, short Month, short Year)
{
  short TotalDays = 0;
  for (int i = 1; i <= Month - 1; i++)
  {
    TotalDays += NumberOfDaysInAMonth(i, Year);
  }
  TotalDays += Day;
  return TotalDays;
}

bool ISLess(sDate Date1, sDate Date2)
{
  return NumberOfDaysFromTheBeginningOfYear(Date1.Day, Date1.Month, Date1.Year) < NumberOfDaysFromTheBeginningOfYear(Date2.Day, Date2.Month, Date2.Year);
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
  cout << "\nPlease enter a Month? ";
  cin >> Month;
  return Month;
}

// Function to read the year from the user
short ReadYear()
{
  short Year;
  cout << "\nPlease enter a Year? ";
  cin >> Year;
  return Year;
}

// Function to read a complete date (day, month, and year) from the user
sDate ReadFullDate()
{
  sDate Date;
  Date.Day = ReadDay();
  Date.Month = ReadMonth();
  Date.Year = ReadYear();
  return Date;
}

// Function to read the number of days to add
short ReadDaysToAdd()
{
  short Days;
  cout << "\nHow many days to add? ";
  cin >> Days;
  return Days;
}

int main()
{
  sDate Date1, Date2;
  cout << "Enter Date1 \n\n";
  Date1 = ReadFullDate();
  cout << "Enter Date2 \n\n";
  Date2 = ReadFullDate();

  if (ISLess(Date1, Date2))
  {
    cout << "yes,Date1 is Less than Date2 \n";
  }
  else
  {
    cout << "No,Date1 isn't Less than Date2 \n";
  }

  return 0;
}