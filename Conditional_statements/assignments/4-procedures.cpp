#include "main.h"

void Ask_for_Grade(float &Grade)
{
    cout << "Enter Grade: " << endl;
    cin >> Grade;
}

void Check_Mark(float Grade)
{
    if (Grade >= 90 && Grade <= 100)
    {
        cout << "A\n";
    }
    else if (Grade >= 80 && Grade <= 89)
    {
        cout << "B\n";
    }
    else if(Grade >= 70 && Grade <= 79)
    {
        cout << "C" << endl;
    } 
    else if (Grade >= 60 && Grade <= 69)
    {
        cout << "D\n";
    }
    else if (Grade >= 50 && Grade <= 59)
    {
        cout << "E" << endl;
    }
    else
    {
        cout << "F" << endl;
    }
}