// Read the Nubmer of hours and calculate the number of days and week
#include <iostream>
using namespace std;

float ReadNum(string message)
{
  float num;
  do
  {
    cout << message << "\n";
    cin >> num;
  } while (num <= 0);
  return num;
}

float DayNum(float Hours)
{
  // cout << "\nThe of Days is : ";
  return Hours / 24;
}

float WeekNum(float Hours)
{
  // cout << "\nThe of Weeks is : ";

  return DayNum(Hours) / 7;
}

int main()
{

  float Hours = ReadNum("Enter a Poitive Number");
  cout << endl
       << DayNum(Hours) << " Days\n";
  cout << endl
       << WeekNum(Hours) << " Weeks\n";
  return 0;
}