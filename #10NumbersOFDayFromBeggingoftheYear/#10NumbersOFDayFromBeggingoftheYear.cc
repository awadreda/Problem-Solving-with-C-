#include <iostream>
using namespace std;

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
  cout << "\nPlease enter a year? ";
  cin >> Year;
  return Year;
}

short ReadDay()
{
  short Year;
  cout << "\nPlease enter a Day? ";
  cin >> Year;
  return Year;
}

bool isLeapYear(short Year)
{
  // A leap year is perfectly divisible by 4 AND not divisible by 100 OR divisible by 400
  return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
  if (Month < 1 || Month > 12)
    return 0;

  int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}

short NumbersOfDayFrombeging(short day, short month, short Year)
{
  short Days = 0;
  for (short i = 1; i < month; i++)
  {
    Days += NumberOfDaysInAMonth(i, Year);
  }
  return Days + day;
}
int main()
{

  short year = ReadYear();
  short Month = ReadMonth();

  short Day = ReadDay();

  cout << "The Noubmer of the day from the begining is  " << NumbersOfDayFrombeging(Day, Month, year) << "\n";
  return 0;
}