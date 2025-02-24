// Sum Odd Nubmer from 1 to N
#include <iostream>
using namespace std;

enum enOddorEven
{
  Odd = 1,
  Even = 2
};

int ReadN()

{
  cout << "Enter A Number\n";
  int n;
  cin >> n;
  return n;
}

enOddorEven CheckOdd(int N)
{
  if (N % 2 == 0)
    return enOddorEven::Even;
  else
    return enOddorEven::Odd;
}

int SumOddNum_for(int N)
{
  int sum = 0;
  cout << "Print Sum of Odd Numbers from 1 to N \n";
  for (int i = 1; i <= N; i++)
  {
    if (CheckOdd(i) == enOddorEven::Odd)
    {
      sum += i;
    }
  }
  return sum;
}

int SumOddNum_While(int N)
{
  int sum = 0;

  cout << "Print Odd Number from 1 to " << N << "\n";
  int counter = 0;
  while (counter < N)
  {
    counter++;
    if (CheckOdd(counter) == enOddorEven::Odd)
    {
      sum += counter;
    }
  }

  return sum;
}

int SumOddNum_DoWhile(int N)
{
  int sum = 0;
  cout << "print Sum Odd Number from 1 to " << N << "\n";
  int Counter = 0;

  do
  {
    Counter++;

    if (CheckOdd(Counter) == enOddorEven::Odd)
    {
      sum += Counter;
    }
  } while (Counter < N);
  return sum;
}

int main()
{

  int N = ReadN();
  cout << SumOddNum_for(N) << "\n";
  cout << SumOddNum_While(N) << "\n";
  cout << SumOddNum_DoWhile(N) << "\n";
  return 0;
}