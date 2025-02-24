#include <iostream>
using namespace std;

int ReadNum()
{
  int num;
  cout << "Enter Positive number \n";
  cin >> num;
  return num;
}

char RandomNum(int from, int to)
{
  char random;
  random = rand() % (to - from + 1) + from;
  return random;
}

string Genrate3chacter()
{

  string key = "";
  for (int i = 1; i <= 3; i++)
  {
    key = key + char(RandomNum(65, 90));
  }

  return key;
}

void Keys(int NumOfkeys)
{
  int counter = 0;
  for (int i = 1; i <= NumOfkeys; i++)
  {
    counter++;
    cout << "Key [" << counter << "] : "
         << Genrate3chacter() << "-"
         << Genrate3chacter()
         << "-" << Genrate3chacter()
         << "-" << Genrate3chacter() << "\n";
  }
}

int main()
{
  srand((char)time(NULL));
  Keys(5);
  return 0;
}