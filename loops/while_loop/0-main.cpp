#include "main.h"

int main(void)
{
    short number, i;

    cout << "enter a positive number: ";
    cin >> number;

    while (number < 0)
    {
        cout << "Enter a positive number. try again" << endl;
        cin >> number;
    }

    i = 1;
    while (i <= number)
    {
        cout << i << " ";
        i++;
    }
    cout << "\n";

    return (0);
}