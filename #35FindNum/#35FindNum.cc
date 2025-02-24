#include <iostream>
using namespace std;

int ReadPoitive(string message)
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

void FillRandonNumss(int arr[100], int &arrlength)
{
  cout << "Enter The number of Element \n";
  cin >> arrlength;

  for (int i = 0; i < arrlength; i++)
  {
    arr[i] = Random(1, 100);
  }
}

void PrintArray(int arr[100], int arrlenght)
{
  for (int i = 0; i < arrlenght; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

bool findNumPosition(int Num, int arr[100], int arrlength)
{
  for (int i = 0; i < arrlength; i++)
  {
    // this function will search the number in array and return the index
    // if the number not found it will retrun 1-
    if (arr[i] == Num)
    {

      return true;
    }
  }
  return false;
}

int main()
{
  srand((unsigned)time(NULL));
  int arr[100], arrlength;

  FillRandonNumss(arr, arrlength);

  cout << "the Element of array \n";
  PrintArray(arr, arrlength);
  int number = ReadPoitive("Enter the number you search about it ");
  int numberPostion = findNumPosition(number, arr, arrlength);
  cout << "The number you looking for is " << number << "\n";
  if (findNumPosition(number, arr, arrlength))
  {
    cout << "Yes, the number is  found :)\n";
  }
  else
  {
    cout << "No, the number is not found :(\n";
    }

  return 0;
}
