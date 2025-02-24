// age
#include <iostream>
using namespace std;

int ReadAge()
{
  int age;
  cout << "Enter your age \n";
  cin >> age;
  return age;
}

bool ValidateNumbetInRange(int number, int from, int to)
{
  return (number >= from && number <= to);
}

void PrintAge(int age)
{

  if (ValidateNumbetInRange(age, 18, 45))

    cout << "\nVaild Age \n";
  else
    cout << "\nInvaild Age\n";
}

int main()
{
  PrintAge(ReadAge());

  return 0;
}