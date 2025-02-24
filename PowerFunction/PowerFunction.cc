// power function
#include <iostream>
using namespace std;

int ReadNumber()
{
  cout << "Enter the number \n";
  int num;
  cin >> num;

  return num;
}

int ReadPower()
{
  cout << "Enter the Power \n";
  int num;
  cin >> num;

  return num;
}

int PowerN(int num, int power)
{
  cout << "result is : ";
  if (power == 0)
  {
    // any number power 0 =1
    return 1;
  }

  int p = 1;
  for (int i = 0; i < power; i++)
  {
    p *= num;
  }
  return p;
}

int main()
{
  cout << PowerN(ReadNumber(), ReadPower()) << "\n";
  return 0;
}