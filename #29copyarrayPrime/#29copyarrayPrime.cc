// #include <iostream>
// using namespace std;
// #include <algorithm>

// int RandomNum(int from, int to)
// {
//   int random;
//   random = rand() % (to - from + 1) + from;
//   return random;
// }

// void FillArrayWithRandomNum(int arr[100], int &arrlength)
// {
//   cout << "Enter Nubmer of elemnets \n";
//   cin >> arrlength;

//   for (int i = 0; i < arrlength; i++)
//   {
//     arr[i] = RandomNum(1, 100);
//   }
// }

// void PrintArray(int arr[100], int arrlength)
// {
//   for (int i = 0; i < arrlength; i++)
//   {
//     cout << arr[i] << " ";
//   }
//   cout << "\n";
// }

// bool IsPrime(int num)
// {

//   for (int i = 2; i < num; i++)
//   {
//     if (num % i == 0)
//     {
//       return false;
//     }
//   }
//   return true;
// }

// void CopyPrimeArray(int arrSource[100], int arrDestation[100], int &arrlength, int arrlength2)
// {
//   int count = 0;
//   for (int i = 0; i < arrlength; i++)
//   {
//     if (IsPrime(arrSource[i]))
//     {
//       count++;
//       arrDestation[i] = arrSource[i];
//     }
//   }
//   arrlength2 == count;
// }

// int main()
// {
//   srand((unsigned)time(NULL));
//   int arr[100], arr2[100], arrlength, arrlength2;

//   FillArrayWithRandomNum(arr, arrlength);

//   CopyPrimeArray(arr, arr2, arrlength, arrlength2);

//   cout << " Array 1 Elements : \n";
//   PrintArray(arr, arrlength);
//   cout << "========================\n";
//   cout << " Array 2 elements : \n";
//   PrintArray(arr2, arrlength2);

//   return 0;
// }