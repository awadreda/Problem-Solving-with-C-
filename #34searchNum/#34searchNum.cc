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

void SeachNumInArray(int arr[100], int arrlength, int CheckNum)
{
  int count = 1;
  for (int i = 0; i < arrlength; i++)
  {
    if (arr[i] == CheckNum)
    {
      cout << "Number you are Looking for is : " << arr[i] << "\n";
      cout << "The Number Found at position : " << i << "\n";
      cout << "The number's order is : " << count << "\n";
    }
   
    count++;
  }
}

int main()
{
  // seeds of the random nubmer genrator
  int arr[100], arrlength;
  FillRandonNumss(arr, arrlength);
  cout << "The Array Elements : \n";
  PrintArray(arr, arrlength);

  int CheckNum = ReadPoitive("Enter the number to search for ");
  cout << "=========================\n";
  SeachNumInArray(arr, arrlength, CheckNum);
  return 0;
}