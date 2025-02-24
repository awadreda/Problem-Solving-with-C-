// Read until age is valid between

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

int ReadAgeUntilBetween(int from, int to)
{
  int age;

  do
  {
    age = ReadAge();
  } while (!ValidateNumbetInRange(age, from, to));
  return age;
}

void PrintAge(int age)
{
  cout << "Your age Is : " << age << "\n";
}

int main()
{
  PrintAge(ReadAgeUntilBetween(16, 44));

  return 0;
}