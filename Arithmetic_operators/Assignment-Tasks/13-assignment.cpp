#include <iostream>
using namespace std;

// problem #39
int main(void)
{
    short TotalBill, CashPaid, PayRemainder;

    cout << "Enter TotalBill: ";
    cin >> TotalBill;

    cout << "Enter cash paid: ";
    cin >> CashPaid;

    PayRemainder = CashPaid - TotalBill;

    cout << "Remainder is: " << PayRemainder << " Dollars\n";

    return (0);

}