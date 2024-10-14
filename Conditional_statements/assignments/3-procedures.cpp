#include "main.h"

void Ask_about_PIN(string &code)
{
    cout << "Enter PIN: ";
    cin >> code;
}

void check_PIN(string PIN)
{
    unsigned int balance = 56700;

    if (PIN == "menna2018")
    {
        cout << "your balance is: " << balance << endl;
    }
    else
    {
        cout << "try again.\n";
        main();
    }
}