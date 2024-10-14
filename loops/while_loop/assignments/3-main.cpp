#include "main.h"

int main(void)
{
    int number, power;

    cout << "enter a number: ";
    cin >> number;

    cout << "Enter power: ";
    cin >> power;

    cout << number << " ^ " << power << " = " << CalcPowerOfNum(number, power) << endl;

    return (0);
}