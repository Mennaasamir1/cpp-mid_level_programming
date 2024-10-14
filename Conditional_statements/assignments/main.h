#ifndef MAIN_H
#define MAIN_H
#include <iostream>
using namespace std;

struct strGrades
{
    float grade1;
    float grade2;
    float grade3;
};

enum enMonths 
{
    Jan = 1, Feb = 2,
    Mar = 3, Apr = 4,
    May = 5, Jun = 6, 
    Jul = 7, Aug = 8,
    Sep = 9, Oct = 10,
    Nov = 11, Dec = 12
};

struct strMonths
{
    string Jan = "It's January";
    string Feb = "It's February";
    string Mar = "It's March";
    string Apr = "It's April";
    string May = "It's May";
    string Jun = "It's June";
    string Jul = "It's July";
    string Aug = "It's August";
    string Sep = "It's September";
    string Oct = "It's october";
    string Nov = "It's November";
    string Dec = "It's December"; 
};

enum enDays {Sun = 1, mon = 2, tue = 3, wed = 4, thu = 5, fri = 6, sat = 7};


void Ask_user(short &age, string &license);
void Check_eligibility(short age, string license);
void Check_pass_Fail(float mark);
void Read_user_Grades(strGrades &Grades);
void check_Average(strGrades Grades);
void Ask_about_age(short &age);
void Validate_age(short age);
void Ask_about_PIN(string &code);
void check_PIN(string PIN);
int main(void);
void Ask_for_Grade(float &Grade);
void Check_Mark(float Grade);
int CalcComission(int TotalSales);
void What_Day_is_it(enDays);
void what_month_is_it(short Month, strMonths MonthOfYear);

#endif
