#include "main.h"

void Ask_user(short &age, string &license)
{
    cout << "How old are you? ";
    cin >> age;

    cout << "Do you have a driver license? (yes / No): ";
    cin >> license;
}

void Check_eligibility(short age, string license)
{
    if (age >= 21 && license == "yes")
    {
        cout << "You're eligible for this job" << endl;
    }

    else
    {
        cout << "sorry, you are not eligible for this job" << endl;
    }
}

void Check_pass_Fail(float mark)
{
    if (mark >= 50)
    {
        cout << "Passed\n";
    }
    else
    {
        cout << "Failed" << endl;
    }
}