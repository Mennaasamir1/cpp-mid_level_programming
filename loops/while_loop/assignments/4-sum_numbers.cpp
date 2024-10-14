#include "main.h"

void sumOfNums(int &number)
{
    int sum = 0;

    while (number != -99)
   {
     sum += number;
     cin >> number;
   }
   cout << "sum of the numbers you entered = " << sum << endl;
}