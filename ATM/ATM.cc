// ATM PIN
#include <iostream>
using namespace std;

string ReadPIN()
{
  string pin;
  cout << "Enter your PIN Code \n";
  cin >> pin;
  return pin;
}

bool CheckPin()
{
  string pin;
  do
  {
    pin = ReadPIN();
    if (pin == "1234")
    {
      return 1;
    }
    else
    {
      cout << "\nwrong number \n";
    }
  } while (pin != "1234");
  return 0;
}

int main()
{
  if (CheckPin())
  {
    cout << "\nright \n";
  }

  return 0;
}