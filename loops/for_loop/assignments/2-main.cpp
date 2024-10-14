#include "main.h"

int main(void)
{
    unsigned int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Factorial of " << number << " = " << factorial_of_N(number) << endl;

    return (0);
}