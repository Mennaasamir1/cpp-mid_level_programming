#include "main.h"

void What_Day_is_it(enDays DaysofWeek)
{
    switch (DaysofWeek)
    {
        case enDays::fri:
            cout << "It's friday\n";
            break;
        case enDays::mon:
            cout << "It's Monday" << endl;
            break;
        case enDays::sat:
            cout << "It's saturday" << endl;
            break;
        case enDays::Sun:
            cout << "It's sunday" << endl;
            break;
        case enDays::thu:
            cout << "It's thursday" << endl;
            break;
        case enDays::tue:
            cout << "It's tuesday" << endl;
            break;
        case enDays::wed:
            cout << "It's wednesday" << endl;
            break;
        default:
            cout << "not a valid day number\n";
    }

    
}