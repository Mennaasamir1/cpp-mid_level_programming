#include "main.h"

void printInfo(strInfo info)
{
        cout << "first name: " << info.FirstName << endl;
        cout << "last name: " << info.lastName << endl;
        cout << "age: " << info.Age << endl;
        cout << "phone number: " << info.phone << endl;
        cout << "*****************************\n";
}
void Printing_employees(strInfo employees[100], int length)
{
    int i;

    for (i = 1; i <= length; i++)
    {
        cout << "\nemployee " << i << " info: " << endl;
        cout << "****************************\n";
        printInfo(employees[i]);
    }
}