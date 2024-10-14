#include "main.h"

int main(void)
{
    float Grade;
    strGrades student;

    Read_user_Grades(student);
    check_Average(student);

    /*
    cout << "Enter grade: ";
    cin >> Grade;
    Check_pass_Fail(Grade);
    */

    return (0);
}