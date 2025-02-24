#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

struct stClientDate
{
  string AcountNumber;
  string PinCode;
  string Name;
  string phone;
  double AcountBalance;
};

vector<string> Spilt(string s, string delim)
{
  vector<string> vSpilt;
  string word = "";
  short pos = 0;
  while ((pos = s.find(delim)) != string::npos)
  {
    word = s.substr(0, pos);
    if (word != "")
    {
      vSpilt.push_back(word);
    }
    s.erase(0, pos + delim.length());
  }
  if (s != "")
  {
    vSpilt.push_back(s);
  }
  return vSpilt;
}

stClientDate FillDataFromVector(vector<string> Data)
{
  stClientDate Client;
  Client.AcountNumber = Data[0];
  Client.PinCode = Data[1];
  Client.Name = Data[2];
  Client.phone = Data[3];
  Client.AcountBalance = stod(Data[4]);
  return Client;
}

void PrintStruct(stClientDate sClient)
{
  cout << sClient.AcountNumber << setw(9) << "|";
  cout << sClient.PinCode << setw(9) << "|";
  cout << sClient.Name << setw(15) << "|";
  cout << sClient.phone << setw(9) << "|";
  cout << sClient.AcountBalance << setw(9) << "|";
}

int main()
{
  string line = "02165468#//#A50#//#Awad Reda Awad Hussein#//#019333#//#5000.0000";

  vector<string> vLineSplit = Spilt(line, "#//#");

  PrintStruct(FillDataFromVector(vLineSplit));
  return 0;
}