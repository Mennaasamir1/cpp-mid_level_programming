#include "main.h"

void print_nums_from_1_to_N(int N)
{
    int num = 1;

    while (N < 0)
    {
        cout << "invalid number. try again" << endl;
        cin >> N;
    }
    while (num <= N)
    {
        cout << num << " ";
        num++;
    }
    cout << "\n";
}