#include <iostream>
using namespace std;

int ReadTotalSales()
{
  int TotalSals;
  cout << "Enter the the Total sales\n";
  cin >> TotalSals;
  return TotalSals;
}

float GetComissionPercentage(float TotalSales)
{
  // cout << "\nThe Comission Percentage is : ";
  if (TotalSales >= 1000)
    return 0.01;
  else if (TotalSales >= 500)
    return 0.02;
  else if (TotalSales >= 300)
    return 0.03;
  else if (TotalSales >= 200)
    return 0.05;
  else
    return 0.00;
}

float CulcultateTotalComission(float TotalSales)
{
  cout << "\n The Total Comission is : ";
  return GetComissionPercentage(TotalSales) * TotalSales;
}

int main()
{
  float N = ReadTotalSales();
  cout << GetComissionPercentage(N);
  cout << CulcultateTotalComission(N);
  return 0;
}