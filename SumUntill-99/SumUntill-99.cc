// Sum inputs Numbers untill -99
#include <iostream>
using namespace std;

float ReadNum(string message)
{

  float num;
  cout << message << "\n";
  cin >> num;
  return num;
}

float SumNums()
{
  int num = 0;
  int sum = 0;
  int Counter = 1;

  do
  {
    num = ReadNum("Enter number " + to_string(Counter));

    if (num == -99)
    {
      break;
    }
    sum += num;
    Counter++;
  } while (num != -99);

  return sum;
}

int main()
{
  cout << endl
       << "Result : " << SumNums() << "\n";
  return 0;
}