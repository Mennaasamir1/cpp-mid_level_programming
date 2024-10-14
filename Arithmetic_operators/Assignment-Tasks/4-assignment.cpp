#include <iostream>
using namespace std;
/**
 * main - entry point
 * 
 * Description - program that swaps two numbers
 * 
 * Return: 0 on success, 1 on failure.
 */

// problem #15
int main(void)
{
    short int Num1, Num2, Temp;

    cout << "Enter Num1: ";
    cin >> Num1;
    cout << "Enter Num2: ";
    cin >> Num2;

    Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;

    cout << "Num1 = " << Num1 << " , " << "Num2  = " << Num2 << endl;
    
    return (0);
}