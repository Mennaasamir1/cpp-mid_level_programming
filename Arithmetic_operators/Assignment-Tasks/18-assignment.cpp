#include <iostream>
using namespace std;
/**
 * main - entry point of the program
 * 
 * Description - calculates how much you need to pay in order to settle a loan.
 * 
 * Return: 0 or 1
 */

// problem #48
int main(void)
{
    unsigned int LoanAmount, MonthlyPayment;

    cout << "Enter Loan amount: ";
    cin >> LoanAmount;

    cout << "How long does it take you to settle the loan? ";
    cin >> MonthlyPayment;

    cout << LoanAmount / MonthlyPayment << endl;

    return (0);
}