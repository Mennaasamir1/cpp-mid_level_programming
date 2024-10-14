#include "main.h"

int main(void)
{
    int from, to;

    cout << "Enter range of numbers" << endl;

    cout << "from: ";
    cin >> from;

    cout << "to: ";
    cin >> to;

    cout << "sum of odd numbers: " << sum_of_odd(from, to) << endl;
    cout <<"sum of even numbers: " << sum_of_even(from, to) << endl;



    return (0);
}