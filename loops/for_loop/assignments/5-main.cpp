#include "main.h"

int main(void)
{
    char i, j;

    for (i = 'A'; i <= 'Z'; i++)
    {
        for (j = 'A'; j <= 'Z'; j++)
        {
            cout << i << j << endl;
        }
    }
    return (0);
}