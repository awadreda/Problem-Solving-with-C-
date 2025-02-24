// piggy bank make video from #31 to #35

#include <iostream>
using namespace std;

struct stPiggyBank
{
  int Pennies, Nickels, Dimes, Quarters, Dollars;
};

stPiggyBank ReadPiggy()
{
  stPiggyBank nums;
  cout << "Enter number of Pinnes \n";
  cin >> nums.Pennies;
  cout << "Enter number Nickels \n";
  cin >> nums.Nickels;
  cout << "Enter number Dimes \n";
  cin >> nums.Dimes;
  cout << "Enter number Quarters \n";
  cin >> nums.Quarters;
  cout << "Enter number Dollares \n";
  cin >> nums.Dollars;

  return nums;
}

int TotalPinnies(stPiggyBank Total)
{

  int nums = (Total.Pennies * 1 + Total.Nickels * 5 +
              Total.Dimes * 10 + Total.Quarters * 25 + Total.Dollars * 100);

  return nums;
}

int main()
{
  int Pennies = TotalPinnies(ReadPiggy());
  cout << endl
       << "Tolal Pinnies = " << Pennies << "\n";
  cout << endl
       << "Total Dollars = " << (float)Pennies / 100 << "\n";
  return 0;
}