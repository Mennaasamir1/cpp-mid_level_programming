#include "main.h"

int main(void)
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    print_nums_from_1_to_N(num);
    Print_nums_from_N_to_1(num);

    return (0);
}