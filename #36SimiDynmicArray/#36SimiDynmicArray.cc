#include <iostream>
using namespace std;

bool IsTrue(bool input)
{
  return input;
}

void simiDynmic(int arr[100], int &arrlength)
{
  arrlength = 0;
  int num;
  bool input;
  do
  {
    cout << "Please Enter a number \n";
    cin >> num;
    arr[arrlength - 1] = num;
    arrlength++;
    cout << "Do want add more nubmer 1\\0 \n";
    cin >> input;

  } while (IsTrue(input));
}

void PrintArray(int arr[100], int arrlenght)
{
  cout << "Array length : " << arrlenght << "\n";

  cout << "Array elemnt \n";
  for (int i = 0; i < arrlenght; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

int main()
{
  int arr[100], arrlength;
  simiDynmic(arr, arrlength);
  PrintArray(arr, arrlength);
  return 0;
}