#include "main.h"

int main(void)
{
    short rows, columns;

    for (rows = 10; rows >= 1; rows--)
    {
        for (columns = 1; columns <= rows; columns++)
        {
            cout << columns << " ";
        }
        cout << "\n";
    }


    return (0);
}