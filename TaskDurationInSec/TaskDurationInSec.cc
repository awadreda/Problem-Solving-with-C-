// Task Duration convert day and hours and minutes to sec
#include <iostream>
using namespace std;

struct stTaskDuration
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

stTaskDuration ReadDuration()
{
  stTaskDuration TotalSec;
  TotalSec.days = ReadNum("Enter number of Days ");
  TotalSec.hours = ReadNum("Enter number of Hours ");
  TotalSec.min = ReadNum("Enter number of Minutes ");
  TotalSec.sec = ReadNum("Enter number of Seconds ");
  return TotalSec;
}

int DurationInSec(stTaskDuration duration)
{

  cout << "The Duration In seconds is : ";
  int TotalSec = 0;
  TotalSec += duration.days * 24 * 60 * 60;
  TotalSec += duration.hours * 60 * 60;
  TotalSec += duration.min * 60;
  TotalSec += duration.sec;

  return TotalSec;
}

int main()
{

  cout << DurationInSec(ReadDuration());
  return 0;
}