#include <iostream>
#include <vector>
using namespace std;




vector<char> MakeAlphabetVector()
{
  vector<char> vAlphabet;

  for(int i=(int)'A';i<=(int)'Z';i++)
  {
      vAlphabet.push_back((char)i);
  }

  return vAlphabet;
}

bool isLetterInHispostions(char C, int Postion, vector<char> vAlphabet)
{

  

  if(vAlphabet[Postion]==toupper(C))
  {
    return true;
  }

  return false;
}

vector<int> findTheOrginalChar(vector<string> solve, vector<char> vAlphabet)
{
  vector<int> result;
  int Howmanyletters=0;

      for (int i = 0; i < solve.size(); i++)
  {
     for(int j=0;j<solve[i].length();j++)
     {
       if (isLetterInHispostions( (char)solve[i][j], j, vAlphabet))
       {
         Howmanyletters++;
      }
     }
      result.push_back(Howmanyletters);
      Howmanyletters=0;

  }
     return result;



}



int main()
{

  // cout << isLetterInHispostions('c',3);

vector<char>Alphabet =MakeAlphabetVector();

  vector<string> Words={"abode","ABc","xyzD"};

  vector<int> Result = findTheOrginalChar(Words, Alphabet);

  cout <<" { " ;
  for(int i=0;i<Result.size();i++)
  {
    cout << Result[i];
    if(Result[i]!=Result[Result.size()-1])
    {
        cout << ",";
    }
  }
  cout << " } ";

  return 0;
}