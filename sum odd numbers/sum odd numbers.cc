/*

make a program print the sum of odd number form 1 to N
*/
#include <iostream>
using namespace std;

int main()
{
  int num, sum;
  cout << "Enter a number \n";
  cin >> num;

  for (int i = 0; i < num; i++)
  {
    if (i % 2 != 0)
    {
      sum = sum + i;
    }
  }
  cout << sum;
  return 0;
}