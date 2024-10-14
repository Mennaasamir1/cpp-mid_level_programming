#include <iostream>
using namespace std;
/**
 * main - Entry point
 * 
 * Description - calculates the sum of given 3 numnbers
 * 
 * Return: 0 or 1
 */

// problem #10

int main(void)
{
    short int Num1, Num2, Num3, Sum;

    cout << "Enter Num1: ";
    cin >> Num1;
    cout << "Enter Num2: ";
    cin >> Num2;
    cout << "Enter Num3: ";
    cin >> Num3;

    Sum = Num1 + Num2 + Num3;

    cout << "The total sum is " << Sum << endl;

}