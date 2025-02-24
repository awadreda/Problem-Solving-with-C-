#include <iostream>
using namespace std;

string GenrateStringFromRangLetters(char start, char end)
{
  string line = "";

  for (int i = (int)start; i <= (int)end; i++)
  {
    line += (char)i;
  }

  return line;
}

string getRange(string s)
{
  string result ="";
  for(int i=s[0];i<=s[2];i++)
  {
    result +=(char)i;
  }

  return result;
}


int main()
{

  cout << GenrateStringFromRangLetters('A', 'C') << "\n";

  cout << getRange("A_I");

  return 0;
}