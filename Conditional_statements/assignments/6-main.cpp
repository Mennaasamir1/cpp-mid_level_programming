#include "main.h"


int main(void)
{   
    short DayNum, MonthNum;
    enDays DaysofWeek;
    strMonths Month;

    cout << "Enter Day num: ";
    cin >> DayNum;

    DaysofWeek = (enDays) DayNum;
    What_Day_is_it(DaysofWeek);

    //cout << "Enter Month number: ";
    //cin >> MonthNum;

    //what_month_is_it(MonthNum, Month);



    return (0);
}