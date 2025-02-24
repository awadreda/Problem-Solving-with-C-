#include <iostream>
using namespace std;

enum enRandom
{
  SamllLetter = 1,
  CaptialLetter = 2,
  SpacialChracter = 3,
  Digit = 4
};

int RandomNumber(int from, int to)
{
  int random = rand() % (to - from + 1) + from;

  return random;
}

void Random(enRandom input)
{
  switch (input)
  {
  case enRandom::CaptialLetter:
    cout << char(RandomNumber(65, 90));
    break;
  case enRandom::SamllLetter:
    cout << char(RandomNumber(97, 122));
    break;
  case enRandom::SpacialChracter:
    cout << char(RandomNumber(33, 47));
    break;
  case enRandom::Digit:
    cout << RandomNumber(0, 9);
    break;
  }
}

int main()
{
  srand((unsigned)time(NULL));

  Random(enRandom::SamllLetter);
  
  return 0;
}