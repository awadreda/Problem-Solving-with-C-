// from N to 1
#include <iostream>
using namespace std;

int ReadN()
{
  cout << "Enter A Number\n";
  int n;
  cin >> n;
  return n;
}

void PrintNto1_while(int N)
{
  cout << "\nPrint " << N << "to 1 with while \n";

  while (N >= 1)
  {
    cout << N << "\n";
    N--;
  }
}

void PrintNto1_DoWhile(int N)
{
  cout << "\nPrint from N to 1\n";
  do
  {
    cout << N << "\n";
    N--;

  } while (N >= 1);
}

void PrintNto1_for(int N)
{
  cout << "\nPrint from " << N << " to 1 \n";
  for (int i = N; i >= 1; i--)
  {
    cout << i << "\n";
  }
}

int main()
{
  int N = ReadN();
  // PrintNto1_while(N);
  PrintNto1_DoWhile(N);
  PrintNto1_for(N);
  return 0;
}