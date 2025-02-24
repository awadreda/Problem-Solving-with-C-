// get grade litter A B c f
#include <iostream>
#include <string>
using namespace std;

int ReadNumIninRang(int from, int to)
{
  int mark;
  do
  {
    cout << "Enter you Mark \n";
    cin >> mark;
  } while (mark < from || mark > to);

  return mark;
}

char GetGradeLetter(int Grade)
{
  cout << "Your Grade is : ";
  if (Grade >= 90)
    return 'A';
  else if (Grade >= 80)
    return 'B';
  else if (Grade >= 80)
    return 'C';
  else if (Grade >= 80)
    return 'D';
  else if (Grade >= 80)
    return 'E';
  else
    return 'F';
}

int main()
{

  cout << GetGradeLetter(ReadNumIninRang(0, 100));
  return 0;
}