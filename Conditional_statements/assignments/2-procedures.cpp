#include "main.h"

void Ask_about_age(short &age)
{
    cout << "How old are you? ";
    cin >> age; 
}

void Validate_age(short age)
{
    if (age >= 18 && age <= 45)
    {
        cout << "valid age\n";
    }
    else
    {
        cout << "invalid age" << endl;
    }
}