#include <iostream>
#include <vector>
#include <string>
using namespace std;

string ReadSTring(string message)
{
  string s;
  cout << message << "\n";
  getline(cin, s);
  return s;
}

vector<string> Split(string s, string delim)
{
  vector<string> vsplit;
  string word = "";
  short pos = 0;
  while ((pos = s.find(delim)) != string::npos)
  {
    word = s.substr(0, pos);
    if (word != "")
    {
      vsplit.push_back(word);
    }
    s.erase(0, pos + delim.length());
  }
  if (s != "")
  {
    vsplit.push_back(s);
  }
  return vsplit;
}

string ReplaceWordInString(string s, string word, string WrodReplace)
{
  string Sword = "";
  vector<string> vSplit;
  vSplit = Split(s, " ");
  // vector<string>::iterator iter = vSplit.begin();
  for (string &val : vSplit)
  {
    if (val == word)
    {
      val = WrodReplace;
    }
    Sword = Sword + val + " ";
  }
  return Sword.substr(0, Sword.length() - 1);
}
int main()
{

  string s = ReadSTring("Enter the string ");
  string word = ReadSTring("Enter the word you want replace");
  string wordReplace = ReadSTring("Enter the word you want put it ");

  cout << "The string before Replaceing \n";
  cout << s << "\n";
  cout << "The string After Replaceing \n";
  cout << ReplaceWordInString(s, word, wordReplace);

  cout << "?";
  return 0;
}