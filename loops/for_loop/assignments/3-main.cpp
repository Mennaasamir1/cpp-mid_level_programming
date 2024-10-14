#include "main.h"

int main(void)
{
    int number, power;

    cout << "Enter number: ";
    cin >> number;

    cout << "Enter power: ";
    cin >> power;

    
    cout << number << "^" << power << " = " << power_of_num(number, power) << endl;

    return (0);
}