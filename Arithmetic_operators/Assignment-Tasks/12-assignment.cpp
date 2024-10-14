#include <iostream>
using namespace std;
/**
 * main - entry point
 * 
 * Description - program that acts as a Piggy Bank calculator
 * 
 * Return: 0 or 1
 */

// problem #35
int main(void)
{
    float Pennies, Nickles, Dimes, Quarters, Dollars;
    float TotalPennies, TotalDollars, TotalNickles;

    cout << "Enter Pennies: ";
    cin >> Pennies;

    cout << "Enter Nickles: ";
    cin >> Nickles;

    cout << "Enter Dimes: ";
    cin >> Dimes;

    cout << "Enter Quarters: ";
    cin >> Quarters;

    cout << "Enter Dollars: ";
    cin >> Dollars;

    TotalPennies = (Pennies * 1) + (Nickles * 5) + (Dimes * 10) + (Quarters * 25) + (Dollars * 100);
    TotalDollars = TotalPennies / 100;
    TotalNickles = TotalPennies / 5;

    cout << "Total pennies => " << TotalPennies << endl;
    cout << "Total Dollars => " << TotalDollars << endl; 
    cout << "Total Nickles => " << TotalNickles << endl; 

    return (0);
}