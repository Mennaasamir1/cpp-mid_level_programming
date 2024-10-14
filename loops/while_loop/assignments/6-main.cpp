#include "main.h"

void Read_atm(string &PIN)
{
    int trial = 3;

    cout << "Enter PIN: ";
    cin >> PIN;

    while (PIN != "1234")
    {
        cout << "wrong PIN. try again\n";
        cout << "Enter PIN: ";
        cin >> PIN;
        trial--;
        if (trial == 1)
        {
            cout << "card is locked\n";
            break;
        }
    }
}

void print_balance(string &PIN)
{
    int balance;

    if (PIN == "1234")
    {
        balance = 31600;
        cout << "balance = " << balance << endl;
    }
}
int main(void)
{
    string PIN;
    
    Read_atm(PIN);
    print_balance(PIN);

    return (0);
}