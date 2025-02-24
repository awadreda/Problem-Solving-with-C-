#include <iostream>
#include <string>
#include <vector>
using namespace std;

string ReadString()
{
  string s;
  cout << "Enter a string \n";
  getline(cin, s);
  return s;
}

string ReverseString(string s)
{
  string result = "";
  for (short i = s.length() - 1; i >= 0; i--)
  {
    result += s[i];
  }

  return result;
}

int main()
{
  string s = ReadString();
  cout << "The string before Revesing \n";
  cout << s << "\n";
  cout << "The string before Revesing \n";
  cout << ReverseString(s) << "\n";

  return 0;
}