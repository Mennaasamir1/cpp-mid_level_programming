#include "main.h"

int to_range(int from, int to)
{
    int number;

    cout << "please enter a nummber between " << from << " and " << to << ": ";
    cin >> number;

    while (number < from || number > to)
    {
        cout << "try again." << endl;
        cin >> number; 
    }

    return (number);
}