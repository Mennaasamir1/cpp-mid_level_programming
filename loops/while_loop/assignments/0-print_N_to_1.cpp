#include "main.h"

void Print_nums_from_N_to_1(int N)
{
    int num;

    while (N < 0)
    {
        cout << "invalid number. try again" << endl;
        cin >> N;
    }
    num = N;
    while (num == N || num >= 1)
    {
        cout << num << " ";
        num--;
    }
    cout << "\n";
}