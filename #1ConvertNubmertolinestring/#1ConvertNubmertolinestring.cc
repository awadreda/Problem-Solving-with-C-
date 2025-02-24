#include <iostream>
#include <vector>
using namespace std;

int ReadNumber()
{
  int num;
  cout << "Enter the nubmer \n";
  cin >> num;
  return num;
}

string NumbertoText(int nums)
{
  string stNumber = "";
  string numbers[] = {"zero", "one", "two", "three", "Four",
                      "Five", "six", "seven", "egiht", "nine", "ten",
                      "eleven", "twelve", "therteen", "fourteen",
                      "fiveteen", "sixteen", "seventeen", "Eghteen", "nineteen"};

  string tens[] = {"zero",
                   "ten",
                   "Twenity",
                   "therity",
                   "fourty",
                   "fivity",
                   "sixty",
                   "seventy",
                   "egihty",
                   "ninty"};

  if (20 > nums && nums >= 0)
  {
    return numbers[nums];
  }
  else if (100 > nums && nums >= 20)
  {
    short Remiender = nums % 10;
    if (Remiender == 0)
    {
      return tens[nums / 10];
    }
    return tens[nums / 10] + " " + numbers[nums % 10];
  }
  else if (1000 > nums && nums >= 100)
  {
    short Remiender = nums % 100;
    if (Remiender == 0)
    {
      return numbers[nums / 100] + " " + "Hunderd ";
    }
    else
    {
      return numbers[nums / 100] + " " + "Hunderd " + NumbertoText(Remiender);
    }
  }
  else if (10000 > nums && nums >= 1000)
  {
    short Remineder = nums % 1000;
    if (Remineder == 0)
    {
      return numbers[nums / 1000] + " " + "Thousnd ";
    }
    else
    {
      return numbers[nums / 1000] + " " + "Thousnd " + NumbertoText(Remineder);
    }
  }
  else if (100000 > nums >= 10000)
  {
    short Remineder = nums % 10000;
    if (Remineder == 0)
    {
      return numbers[nums / 10000] + " thousnds ";
    }
    else if (((nums / 1000) % 10 == 0) && Remineder == 0)
    {
      return tens[nums / 10000] + " Thousnds ";
    }
    else
    {
      return numbers[nums / 10000] + " Thousnds " + NumbertoText(Remineder);
    }
  }

  else if (1000000 > nums && nums >= 100000)
  {
    short Remineder = nums % 1000;
    // if (Remineder == 0)
  }

  return "notvalid";
}

int main()
{

  int num = ReadNumber();
  cout << NumbertoText(num);
  return 0;
}