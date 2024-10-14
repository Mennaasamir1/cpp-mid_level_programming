#include <iostream>
using namespace std;
/**
 * main - entry point of the program.
 * 
 * Description - program that acts as a simple calculator.
 * 
 * Return: 0 or 1
 */

// problem #7
int main(void)
{
    short int first_number, second_number;

    cout << "Enter first number: ";
    cin >> first_number;

    cout << "Enter second number: ";
    cin >> second_number;

    cout << first_number << " + " << second_number << " = " << first_number + second_number << endl;
    cout << first_number << " - " << second_number << " = " << first_number - second_number << endl;
    cout << first_number << " / " << second_number << " = " << first_number / second_number << endl;
    cout << first_number << " * " << second_number << " = " << first_number * second_number << endl;
    cout << first_number << " % " << second_number << " = " << first_number % second_number << endl;

}