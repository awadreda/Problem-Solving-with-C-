#include <iostream>
using namespace std;
#include <vector>

int HowManyTimeitemInTheArray(vector<int> arr ,int Item)
{
  int Counter=0;
  for(int i=0;i<arr.size();i++)
  {
    if(Item==arr[i])
    {
      Counter++;
    }
  }

  return Counter;
}




    int MostFrequent(vector<int> arr)
{
  int NumberTimes=0;
  int two=0;
  int theMaxNum=0;

  for(int i=0;i<arr.size();i++)
{
  NumberTimes = HowManyTimeitemInTheArray(arr, arr[i]);
  if (NumberTimes > two)
  {
    two = NumberTimes;
    theMaxNum=arr[i];
}

}
return theMaxNum;
}



int main()
{
  vector <int > arr=         {3,-1,-6,-1,2,3,-6,1,3,-6,-1,4,9,-6};

  cout << MostFrequent(arr);



  return 0;
}