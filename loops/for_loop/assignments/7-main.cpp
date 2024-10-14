#include "main.h"

int main(void)
{
    short i, j;

    for (i = 1; i <= 10; i++)
    {
        for (j = 10; j >= i; j--)
        {
            cout << '*';
        }
        cout << endl;
    }
    return (0);
}