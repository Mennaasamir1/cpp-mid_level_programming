#include "main.h"
struct StrStudents
{
    string name;
    int age;
    string grade;
    float mark;
};
StrStudents stdnts;

void ReadingInfo(StrStudents students[100], int length)
{
    int i;

    for (i = 1; i <= length; i++)
    {
        cout << "student " << i << " info" << endl;

        cout << "first name: ";
        cin >> students[i].name;

        cout << "Age: ";
        cin >> students[i].age;

        cout << "grade: ";
        cin >> students[i].grade;

        cout << "mark: ";
        cin >> students[i].mark;
        
    }
}

void printingInfo(StrStudents students[100], int length)
{
    int i;

    for (i = 1; i <= length; i++)
    {
        cout << "student " << i  << ":"<< endl;
        cout << "********************************\n";
        cout << "first name: " << students[i].name << endl;
        cout << "age: " << students[i].age << endl;
        cout << "grade: " << students[i].grade << endl;
        cout << "mark: " << students[i].mark << endl;
        cout << "*********************************\n";
    }
}

float sumOfMarks(StrStudents students[100], int length)
{
    int i;
    float sum = 0;

    for (i = 1; i <= length; i++)
    {
        sum += students[i].mark;
    }
    return (sum);
}
int main(void)
{
    StrStudents student[100];
    int length, sum;

    cout << "How many students? ";
    cin >> length;

    ReadingInfo(student, length);
    cout << "\n*********************\n";
    printingInfo(student, length);

    sum = sumOfMarks(student, length);    
    cout << "sum of grades = " << sum << endl;
    cout << "Average of grades = " << sum / length << endl;

    return (0);
}