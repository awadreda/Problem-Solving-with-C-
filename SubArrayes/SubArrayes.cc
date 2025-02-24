#include <iostream>
using namespace std;
#include <vector>

int ReturnArryElement(vector <int> arr,int elementPostion)
{
  if(arr.size()-1<=elementPostion)
  {
  return 0;
  }
  else
  {
    
    
  }
    return 0; 
}


int SumSubArrays(vector<vector <int>> arr)
{
  int result=0;

  for(int i=0;i<arr.size();i++)
  {
    switch (i)
    {
    case 0:
      result+=ReturnArryElement(arr[0],2);
      break;
    case 1:
    result+=ReturnArryElement(arr[1],1);  
    break;
    case 2:
    result+=ReturnArryElement(arr[3],0);
    break;
    
    }

  }

  return result;
}

int TTSumSubArrays(vector<vector <int>> arr)
{
  int result=0;

  for(int i=0;i<arr.size();i++)
  {
    switch (i)
    {
    case 0:
      if(!(arr[0].size()-1<2))
      {
          result+=arr[i][2];
      }
      break;
    case 1:
      if (!(arr[1].size() - 1 < 1))
      {
        result += arr[i][1];
      }
      break;
    case 2:
      if (!(arr[2].size() - 1 < 0))
      {
        result += arr[i][0];
      }
      break;
    }

  }

  return result;
}


int main()
{

vector <vector <int>>arr= {{3,2,1,0},{4,6,5,3,2},{9,8,7,4}};
vector <vector <int>>arr2= {{3},{4,6,5,3,2},{9,8,7,4}};

cout << "the sum is : " << TTSumSubArrays(arr2);

return 0;
}