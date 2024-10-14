#include "main.h"

int main(void)
{
    int num;

    cout << "Enter num: ";
    cin >> num;

    cout << "factorial of " << num << " is " << factorial_of_Num(num) << endl;
    
    return (0);
}