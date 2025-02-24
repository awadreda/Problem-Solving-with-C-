#include <iostream>
using namespace std;
#include <math.h>
#include <vector>

int TotalFloors(vector<int> Floors)
{
  int result = 0;
  int secfloor = 0;
  int frFloor = 0;
  for (int i = 0; i < Floors.size() - 1; i++)
  {

    // frFloor = Floors[i];
    // secfloor = Floors[i + 1];

    result += abs(Floors[i] - Floors[i + 1]);
  }

  return result;
}

int main()
{

  vector<int> floors = {7, 1, 7, 1};

  cout << TotalFloors(floors);

  // cout << abs(-1);

  return 0;
}