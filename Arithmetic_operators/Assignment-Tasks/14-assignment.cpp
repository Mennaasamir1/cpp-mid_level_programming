#include <iostream>
using namespace std;
/**
 * main - entry point
 * 
 * Description - program that adds service fees and sales tax to the bill value
 * 
 */

// problem #40
int main(void)
{
    float ServiceFee, SalesTax, BillValue, TotalBill;

    cout << "Enter Bill Value: ";
    cin >> BillValue;

    SalesTax = 1.16;
    ServiceFee = 1.1;

    TotalBill = BillValue * SalesTax * ServiceFee;
    cout << "Total Bill: " << TotalBill << endl;

    return (0);
}