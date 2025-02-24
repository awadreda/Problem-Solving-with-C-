// Print From 1 To N using while and do_while and For
#include <iostream>
using namespace std;

int ReadN()
{
  cout << "Enter A Number\n";
  int n;
  cin >> n;
  return n;
}

void PrintN_While(int N)
{
  int Counter = 0;

  cout << "Print form 1 to N With while loop\n";
  while (Counter < N)
  {
    Counter++;
    cout << Counter << "\n";
  }
}

void PrintN_Do_While(int N)
{
  int Counter = 0;
  cout << "\nPrint from 1 to N with Do While\n";
  do
  {
    Counter++;
    cout << Counter << "\n";
  } while (Counter < N);
}

void PrintN_For(int N)
{
  cout << "\nPrint from 1 to N with for loop\n";
  for (int i = 1; i <= N; i++)
  {
    cout << i << "\n";
  }
}

int main()
{
  int N = ReadN();
  // PrintN_While(N);
  PrintN_Do_While(N);
  PrintN_For(N);

  return 0;
}