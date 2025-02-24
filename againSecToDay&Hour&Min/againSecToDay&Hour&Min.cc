#include <iostream>
#include <cmath>
using namespace std;

struct stDuration
{
  int Day, Hour, Min, sec;
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

stDuration ConvertToDuration(int TotalSec)
{
  stDuration Duration;
  const int SecPerDay = 24 * 60 * 60;
  const int SecPerHour = 60 * 60;
  const int SecPerMin = 60;
  int Remainder = 0;
  Duration.Day = floor(TotalSec / SecPerDay);
  Remainder = (TotalSec % SecPerDay);
  Duration.Hour = floor(Remainder / SecPerHour);
  Remainder = Remainder % SecPerHour;
  Duration.Min = floor(Remainder / SecPerMin);
  Remainder = Remainder / SecPerMin;
  Duration.sec = Remainder;
  return Duration;
}

void PrintDuration(stDuration Convert)
{
  cout << "\n"
       << Convert.Day << ":"
       << Convert.Hour << ":"
       << Convert.Min << ":"
       << Convert.sec << "\n";
}
int main()
{
  int TotalSec = ReadNum("Enter Positive number");
  PrintDuration(ConvertToDuration(TotalSec));
  return 0;
}