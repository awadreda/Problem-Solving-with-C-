/*
sum of even number
*/
#include <iostream>
using namespace std;

int main()
{
  int num;
  int sum = 0;
  cout << "Enter the number \n";
  cin >> num;

  for (int i = 0; i <= 10; i++)
  {
    if (i % 2 == 0)
    {
      sum = sum + i;
    }
  }
  cout << sum;
  return 0;
}