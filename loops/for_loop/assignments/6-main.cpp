#include "main.h"

int main(void)
{
    int i, j;

    for (i = 1; i <= 10; i++) /* number for rows */
    {
        for (j = 1; j <= i; j++) /* number of columns */
        {
            cout << j;
        }
        cout << endl;
    }
}