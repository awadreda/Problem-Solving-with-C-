#include <iostream>
using namespace std;

short ReadNumber()
{
  short Number;
  cout << "\nEnter a Number? ";
  cin >> Number;
  return Number;
}

string LeapYear(short year)
{
  if (year % 400 == 0)
  {
    return "This year  " + to_string(year) + " is A leap Year";
  }
  else if (year % 4 == 0 && year % 100 != 0)
  {

    return "This year  " + to_string(year) + " is A leap Year";
  }
  else
  {
    return "This year  " + to_string(year) + " is NOT! A leap Year";
  }
}

int main()
{
  short year = ReadNumber();
  cout << LeapYear(year);

  return 0;
}