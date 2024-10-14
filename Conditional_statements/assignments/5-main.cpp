#include "main.h"

int main(void)
{
    unsigned int TotalSales;
 
    cout << "Enter Total sales: ";
    cin >> TotalSales;

    cout << "\nCommision = " << CalcComission(TotalSales) << endl;

    return (0);
}