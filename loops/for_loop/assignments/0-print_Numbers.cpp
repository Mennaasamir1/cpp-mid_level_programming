#include "main.h"

void Print_numbers(short N)
{
     short num;

     for (num = 1; num <= N; num++)
     {
          cout << num << endl;
     }
}

void Print_N_to_one(short N)
{
     short num;

     for (num = N; num >= 1; num--)
     {
          cout << num << endl;
     }
}