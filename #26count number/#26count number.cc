/*
Write a prgram to print numbers from 1 to N
*/

#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "enter a number\n";
  cin >> num;
  cout << "================\n";
  for (int i = 1; i < num + 1; i++)
  {
    cout << i << "\n";
  }

  return 0;
}