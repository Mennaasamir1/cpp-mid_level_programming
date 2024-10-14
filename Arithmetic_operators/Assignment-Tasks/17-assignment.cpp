#include <iostream>
using namespace std;
/**
 * main - entry point
 * 
 * Description - Calculates How long it'll take you to settle a loan.
 * 
 * Return: 0 or 1
 */

// problem #47
int main(void)
{
    unsigned int LoanAmount, MonthlyPayment;
    unsigned short Months;

    cout << "Enter Loan amount: ";
    cin >> LoanAmount;

    cout << "How much can you pay monthly to settle the loan? ";
    cin >> MonthlyPayment;

    Months = LoanAmount / MonthlyPayment;

    cout << Months << " Months" << endl;

    return (0);
}