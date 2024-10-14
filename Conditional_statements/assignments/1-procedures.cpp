#include "main.h"

void Read_user_Grades(strGrades &Grades)
{
    cout << "Enter grade1: ";
    cin >> Grades.grade1;

    cout << "Enter grade2: ";
    cin >> Grades.grade2;

    cout << "Enter grade3: ";
    cin >> Grades.grade3;
}

void check_Average(strGrades Grades)
{
    float Average;

    Average = (Grades.grade1 + Grades.grade2 + Grades.grade3) / 3;

    if (Average >= 50)
    {
        cout << "you passed the exam!\n";
    }
    else
    {
        cout << "you failed." << endl;
    }
}