#include <iostream>
using namespace std;

enum enCharcterType
{
  CaptialCharcter = 1,
  SmallCharcter = 2,
  SpcialCharcter = 3,
  Digit = 4
};

int ReadPoitiveNumber(string message)
{
  int num;
  do
  {
    cout << message << "\n";
    cin >> num;

  } while (num <= 0);
  return num;
}

int Random(int from, int to)
{
  int random = rand() % (to - from + 1) + from;
  return random;
}

char RandomCharcter(enCharcterType TypeChar)
{
  switch (TypeChar)
  {
  case enCharcterType::CaptialCharcter:
  {
    return (char)Random(65, 90);
    break;
  }
  case enCharcterType::SmallCharcter:
  {
    return char(Random(97, 122));
    break;
  }
  case enCharcterType::SpcialCharcter:
  {
    return char(Random(33, 47));
    break;
  }
  case enCharcterType::Digit:
  {
    return char(Random(48, 57));
    break;
  }
  default:
  {
    return char(Random(65, 90));
    break;
  }
  }
}

string GetWord(enCharcterType type, int lenth)
{
  string word = "";
  for (int i = 1; i <= lenth; i++)
  {
    word = word + RandomCharcter(type);
  }
  return word;
}

string GetKey()
{
  string key = "";
  key = key + GetWord(enCharcterType::CaptialCharcter, 4) + "-";
  key = key + GetWord(enCharcterType::CaptialCharcter, 4) + "-";
  key = key + GetWord(enCharcterType::CaptialCharcter, 4) + "-";
  key = key + GetWord(enCharcterType::CaptialCharcter, 4);

  return key;
}

void FillArraywithKeys(string arr[100], int arrlength)
{
  for (int i = 0; i < arrlength; i++)
  {
    arr[i] = GetKey();
  }
}

void PrintArrayofKesys(string arr[100], int arrlength)
{
  for (int i = 0; i < arrlength; i++)
  {
    cout << "Array [" << i << "] : " << arr[i] << "\n";
  }
}

int main()
{
  // seeds The Random Nubmer gerator in C++ Call only once
  srand((unsigned)time(NULL));
  string arr[100];

  int arrlength = ReadPoitiveNumber("Enter the Nubmer of Elements ");
  FillArraywithKeys(arr, arrlength);
  cout << "The Element of Array \n";
  PrintArrayofKesys(arr, arrlength);

  return 0;
}