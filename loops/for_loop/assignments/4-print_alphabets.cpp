#include "main.h"

void print_Cap_alphabets(void)
{
    int alpha;

    for (alpha = 65; alpha <= 90; alpha++)
    {
        cout << char(alpha) << " ";
    }
    cout << "\n";
}

void print_lowercase(void)
{
    int alpha;

    for (alpha = 97; alpha <= 122; alpha++)
    {
        cout << char(alpha) << " ";
    }
    cout << "\n";
}