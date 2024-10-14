#include "main.h"

void ReadInfo(strInfo &info)
{
    cout << "Enter first name: ";
    cin >> info.FirstName;

    cout << "Enter last name: ";
    cin >> info.lastName;

    cout << "Enter age: ";
    cin >> info.Age;

    cout << "Enter phone number: ";
    cin >> info.phone;
    cout << "*************************\n";
}
void Reading_employees(strInfo employees[100], int length)
{
    int i;

    for (i = 1; i <= length; i++)
    {
        cout << "emloyee " << i << " info" << endl;
        ReadInfo(employees[i]);
    }
}