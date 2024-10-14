#include "main.h"

void print_alphabets(void)
{
    char alphabet = 'A';

    while (alphabet >= 'A' && alphabet <= 'Z')
    {
        cout << alphabet << " ";
        alphabet++;
    }
    cout << "\n";
   
}