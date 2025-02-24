// Mark Pass failed

#include <iostream>
using namespace std;

enum enMark
{
  Pass = 1,
  Fail = 2
};

int ReadMark()
{
  int num;
  cout << "Enter your Mark\n";
  cin >> num;
  return num;
}

enMark CheckMark(int num)
{

  if (num >= 50)
    return enMark::Pass;
  else
    return enMark ::Fail;
}

void PrintMark(int mark)
{

  if (CheckMark(mark) == enMark::Pass)
    cout << "\nYou Pass\n";
  else
    cout << "\nYou Faild\n";
}

int main()
{
  PrintMark(ReadMark());
   return 0;
}