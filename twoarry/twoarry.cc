#include <iostream>
using namespace std;
#include <vector>

// 4,5,6,4,3,5 =8

bool isRepeated(int num, int arr[6])
{
  int counter=0;
  for (int i = 0; i < 6; i++)
  {
    if (arr[i] == num)
    {
      counter++;
      if(counter>1)
      {
      return true;

      }
    }
  }
  return false;
}






int SumOFSngleArray(int arr[6])
{

  int result = 0;
  for (int i = 0; i < 6; i++)
  {
    if (!isRepeated(arr[i], arr))
    {
      result += arr[i];
    }
  }

  return result;
}

int main()
{
  int arr[6] = {4, 5, 7, 4, 5, 8};

  cout << "the Result : " << SumOFSngleArray(arr);

  return 0;
}