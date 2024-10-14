#include "main.h"

int main(void)
{
    short N;

    Ask_user(N);

    Print_numbers(Read_N(N));
    cout << "_________________\n";
    Print_N_to_one(Read_N(N));

    return (0);
}