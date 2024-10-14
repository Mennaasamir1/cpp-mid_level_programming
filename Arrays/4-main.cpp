#include "main.h"

int main(void)
{
    strInfo employees[100];
    int length;

    cout << "How many employees? (100 maximum):  ";
    cin >> length;

    Reading_employees(employees, length);
    Printing_employees(employees, length);

    return (0);
}