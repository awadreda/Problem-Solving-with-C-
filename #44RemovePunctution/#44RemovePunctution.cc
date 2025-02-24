#include <iostream>
#include <string>
#include <vector>
using namespace std;
string ReadSTring(string message)
{
  string s;
  cout << message << "\n";
  getline(cin, s);
  return s;
}

string RemovePunc(string &punc)
{
  string s = "";
  for (short i = 0; i < punc.length(); i++)
  {
    if (!ispunct(punc[i]))
    {
      s += punc[i];
    }
  }
  return s;
}
int main()
{
  string s = "I'm awad , I love Programming , i'm astudent @programmingAdvices:?!";
  cout << "The string before remove the punctution \n";
  cout << s << "\n";
  cout << "The string After remove the punctution \n";
  cout << RemovePunc(s) << "\n";

  return 0;
}