#include "main.h"

int main(void)
{
    short i, j;

    for (i = 1; i <= 10; i++)
    {
        for (j = i; j <= 10; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    return (0);
}