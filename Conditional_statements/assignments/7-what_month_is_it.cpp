#include "main.h"

void what_month_is_it(short Month, strMonths MonthOfYear)
{
    if (Month < 1 && Month > 12)
    {
        cout << "not a valid month number\n";
    }
    else
    {
        if (Month == enMonths::Jan)
        {
            cout << MonthOfYear.Jan << endl;
        }
        else if (Month == enMonths::Feb)
        {
            cout << MonthOfYear.Feb << endl;
        }
        else if (Month == enMonths::Mar)
        {
            cout << MonthOfYear.Mar << endl;
        }
        else if (Month == enMonths::Apr)
        {
            cout << MonthOfYear.Apr << endl;
        }
        else if (Month == enMonths::May)
        {
            cout << MonthOfYear.May << endl;
        }
        else if (Month == enMonths::Jun)
        {
            cout << MonthOfYear.Jun << endl;
        }
        else if (Month == enMonths::Jul)
        {
            cout << MonthOfYear.Jul << endl;
        }
        else if (Month == enMonths::Aug)
        {
            cout << MonthOfYear.Aug << endl;
        }
        else if (Month == enMonths::Sep)
        {
            cout << MonthOfYear.Sep << endl;
        }
        else if (Month == enMonths::Oct)
        {
            cout << MonthOfYear.Oct << endl;
        }
        else if (Month == enMonths::Nov)
        {
            cout << MonthOfYear.Nov << endl;
        }
        else
        {
            cout << MonthOfYear.Dec << endl;
        }
    }
}