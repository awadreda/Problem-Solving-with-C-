// #include <iostream>
// using namespace std;

// int Random(int from, int to)
// {
//   int random = rand() % (to - from + 1) + from;
//   return random;
// }

// void FillOrderNum(int arr[100], int &arrlength)
// {
//   cout << "Enter The number of the Elements \n";
//   cin >> arrlength;

//   for (int i = 0; i < arrlength; i++)
//   {
//     arr[i] = i + 1;
//   }
// }

// void PrintArray(int arr[100], int arrlenght)
// {
//   for (int i = 0; i < arrlenght; i++)
//   {
//     cout << arr[i] << " ";
//   }
//   cout << "\n";
// }

// void RandomOrderArray(int arrSource[100], int arrDestnation[100], int arrlength)
// {
//   for (int i = 0; i < arrlength; i++)
//   {
//     arrDestnation[Random(0, arrlength) - 1] = arrSource[i];
//   }
// }

// int main()
// {
//   // seeds to genrate random number inC++
//   srand((unsigned)time(NULL));
//   int arr[100], arrlength;
//   FillOrderNum(arr, arrlength);
//   int arr2[100];
//   RandomOrderArray(arr, arr2, arrlength);

//   cout << "Array 1 Elements : \n";
//   PrintArray(arr, arrlength);
//   cout << "====================\n";
//   cout << "Array 2 Elements : \n";
//   PrintArray(arr2, arrlength);

//   return 0;
// }