#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct stClientDate
{
  string AcountNumber;
  string PinCode;
  string Name;
  string phone;
  double AcountBalance;
};

void FillData(stClientDate &ClientData)
{
  cout << "Enter Acount Number : ";
  getline(cin, ClientData.AcountNumber);
  cout << "Enter The Pin Code : ";
  getline(cin, ClientData.PinCode);
  cout << "Enter Name ";
  getline(cin, ClientData.Name);
  cout << "Enter Phone ";
  getline(cin, ClientData.phone);
  cout << "Enter Acount Balance \n";
  cin >> ClientData.AcountBalance;
}
string ConvertRecordToLine(stClientDate &CLinetdata, string delim)
{
  string result = "";
  result = result + CLinetdata.AcountNumber + delim;
  result = result + CLinetdata.PinCode + delim;
  result = result + CLinetdata.Name + delim;
  result = result + to_string(CLinetdata.AcountBalance);
  return result;
}

int main()
{
  stClientDate Client;
  FillData(Client);
  cout << ConvertRecordToLine(Client, "#//#") << "\n";

  return 0;
}