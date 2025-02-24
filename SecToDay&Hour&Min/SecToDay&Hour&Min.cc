// convert secs to days & hours & mins
#include <iostream>
#include <cmath>
using namespace std;

struct stConvertSec
{
  int days, hours, min, sec;
};

int ReadNum(string message)
{
  int num;
  do
  {
    cout << message << "\n";
    cin >> num;
  } while (num <= 0);
  return num;
}

stConvertSec ConvertToNormal(int TotalSec)
{
  stConvertSec TaskDuration;
  const int SecPerDay = 24 * 60 * 60;
  const int SecPerHour = 60 * 60;
  const int SecPerMin = 60;

  int Remainder = 0;

  TaskDuration.days = floor(TotalSec / SecPerDay);
  Remainder = TotalSec % SecPerDay;
  TaskDuration.hours = floor(Remainder / SecPerHour);
  Remainder = Remainder % SecPerHour;
  TaskDuration.min = floor(Remainder / SecPerMin);
  Remainder = Remainder % SecPerMin;
  TaskDuration.sec = Remainder;
  return TaskDuration;
}

void PrintTaskDuration(stConvertSec Duration)
{
  cout << "\n"
       << Duration.days << ":"
       << Duration.hours << ":"
       << Duration.min << ":"
       << Duration.sec << "\n";
}

int main()
{
  int totalsec = ReadNum("Enter Total seconds ");
  PrintTaskDuration(ConvertToNormal(totalsec));
  return 0;
}