#include <iostream>
#include <cstdlib>
using namespace std;

int RandonNumber(int from, int to)
{
  int Random = rand() % (to - from + 1) + from;
  return Random;
}

int main()
{
  srand((unsigned)time(NULL));

  // cout << RandonNumber(10, 100) << "\n";
  // cout << RandonNumber(10, 100) << "\n";
  // cout << RandonNumber(10, 100) << "\n";
  cout << "==================================================\n";
  int expremnt = rand() % (5 - 2 + 2) + 2;
  cout << expremnt;

  // cout << rand() % 10 << "\n";
  // cout << rand() << "\n";
  // cout << rand() % 10 << "\n";

  return 0;
}