#include "main.h"

int main(void)
{
    //SumProcedure();

    short sum, num1 = 20, num2 = 50;

    cout << "previous values of num1, num2 = " << num1 << " , " << num2 << endl;

    Swap_numbers(num1, num2);
    cout << "After swaping values: " << num1 << " " << num2 << endl;

    return (0);
}