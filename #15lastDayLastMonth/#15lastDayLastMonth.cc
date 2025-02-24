#include <iostream>
using namespace std;

// Structure to represent a date
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

// Function to calculate the number of days in a given month
short NumberOfDaysInAMonth(short Month, short Year)
{
  if (Month < 1 || Month > 12)
    return 0;

  int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}

// Function to check if Date1 is before Date2
bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
  return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

bool ISEquel(stDate Date1, stDate Date2)
{
  return (Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false)
                                    : false;
}

bool IsLastMonth(stDate Date)
{
  return (Date.Month == 12);
}

bool ISLastDay(stDate Date)
{
  return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
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
  if (IsLastMonth(Date1))
  {
    cout << "\nYes, Date1 is the Last Month \n.";
  }
  else
  {
    cout << "\nYes, Date1 is not the Last Month \n.";
    // cout << "\nNo, Date1 is NOT Equel than Date2.";
  }

  if (ISLastDay(Date1))
  {
    cout << "\nYes, Date1 is the Last Day\n.";
  }
  else
  {
    cout << "\nYes, Date1 is not the Last Day\n.";
    // cout << "\nNo, Date1 is NOT Equel than Date2.";
  }

  system("pause>0");
  return 0;
}
