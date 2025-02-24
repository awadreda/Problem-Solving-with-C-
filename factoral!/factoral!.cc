/*
Make
*/
#include <iostream>
using namespace std;

int main()
{
  int num;
  int fac = 1;
  cout << "Enter a Postive number \n";
  cin >> num;
  while (num <= 0)
  {
    cout << " Not vaild  \n"
         << "Enter a Postive number \n";

    cin >> num;
  }
  for (int i = num; i > 0; i--)
  {
    fac = fac * i;
  }
  cout << "The factorial of " << num << "! is " << fac;
  return 0;
}