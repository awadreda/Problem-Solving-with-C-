#include <iostream>
using namespace std;
enum enDays
{
  Sun = 0,
  Mon = 1,
  Tue = 3,
  Wed = 4,
  Th = 5,
  Fri = 6,
  sat = 7
};

string WeekDay(enDays Day)
{
  switch (Day)
  {
  case enDays::Sun:
    return "SunDay";
    break;
  case enDays::Mon:
    return "MonDay";
    break;
  case enDays::Tue:
    return "TuesDay";
    break;
  case enDays::Wed:
    return "Wedensday";
    break;
  case enDays::Th:
    return "Thersday";
    break;
  case enDays::Fri:
    return "Friday";
    break;
  case enDays::sat:
    return "Saterday";
    break;

  default:
    return "";
    break;
  }
}

// Hadhoud style
string Hadweekday(short day)
{
  string arrDay[7] = {"sun", "mon", "Tue", "Wed", "The", "Fri", "Sat"};
  return arrDay[day];
}

short DayOrder(short Day, short Month, short Year)
{
  short a, y, m;
  a = (14 - Month) / 12;
  y = Year - a;
  m = Month + (12 * a) - 2; // Gregorian:
  // 0:sun, 1:Mon, 2:Tue...etc
  return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

short ReadMonth()
{
  short Month;
  cout << "\nPlease enter a Month to check: ";
  cin >> Month;
  return Month;
}

short ReadYear()
{
  short Year;
  cout << "\nPlease enter a year to check: ";
  cin >> Year;
  return Year;
}

short ReadDay()
{
  short Month;
  cout << "\nPlease enter a Day to check: ";
  cin >> Month;
  return Month;
}

int main()
{
  short Year = ReadYear();
  short Month = ReadMonth();
  short Day = ReadDay();
  short oredr = DayOrder(Day, Mon, Year);
  cout
      << "\n\nData                     :" << Day << "/" << Month << "/" << Year << "\n";
  cout << "The order of the day  is : " << oredr << "\n";
  cout << "The day is               : " << WeekDay(enDays(oredr)) << "\n";

  return 0;
}