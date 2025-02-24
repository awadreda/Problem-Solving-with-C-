#include <iostream>
using namespace std;

string ReadPassWord(string message)
{
  string pass;
  cout << message << "\n";
  cin >> pass;
  return pass;
}

void GuessPass(string Pass)
{
  int counter = 0;
  string word = "";
  for (int i = 65; i <= 90; i++)
  {
    for (int j = 65; j <= 90; j++)
    {
      for (int k = 65; k <= 90; k++)
      {
        word = word + char(i);
        word = word + char(j);
        word = word + char(k);
        counter++;
        if (Pass == word)
        {
          cout << "Trai [" << counter << "] :" << word << "\n";
        }
        word = "";
      }
    }
  }
}

int main()
{
  GuessPass(ReadPassWord("Enter your Password 3 captial letters "));

  return 0;
}