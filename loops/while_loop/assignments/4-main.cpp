#include "main.h"

int main(void)
{
   int num, sum = 0;

   cout << "enter numbers (then enter -99 to get the sum of the numbers):" << endl;
   cin >> num;

   sumOfNums(num);

   return (0);
}