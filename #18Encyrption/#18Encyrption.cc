
//Important

#include <iostream>
using namespace std;

string ReadText(string message)
{
  string pass;
  cout << message << "\n";
  cin >> pass;
  return pass;
}

int ReadKey(string message)
{
  int key;
  cout << message << "\n";
  cin >> key;
  return key;
}

string Encryption(string name, int key)
{
  for (int i = 0; i < name.length(); i++)
  {
    name[i] = char((int)name[i] + key);
  }
  return name;
}

string decryption(string name, int key)
{
  for (int i = 0; i < name.length(); i++)
  {
    name[i] = char((int)name[i] - key);
  }
  return name;
}

int main()
{
  // string text = ReadText("Enter the text");
  // int key = ReadKey("Enter the key");
  // cout << "Text before Encryption : " << text << '\n';
  cout << "Text after Encryption  : ";
  cout << Encryption("Mohammed", 2);
  return 0;
}