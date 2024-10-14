#include "main.h"

int main(void)
{
    int i, j;

    for (i = 65; i <= 70; i++)
    {
        for (j = 65; j <= i; j++)
        {
            cout << char(j) << " ";
        }
        cout << "\n";
    }
    return (0);
}