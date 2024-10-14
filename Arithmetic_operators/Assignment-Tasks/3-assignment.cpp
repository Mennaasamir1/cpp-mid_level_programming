#include <iostream>
using namespace std;
/**
 * main - entry point
 * 
 * Description - calculates the average score of a student.
 * 
 * Return: 0 or 1
 */
// problem #14
int main(void)
{
    short int Mark1, Mark2, Mark3, Average;

    cout << "Enter the first mark: \n";
    cin >> Mark1;
    cout << "Enter the second mark: \n";
    cin >> Mark2;
    cout << "Enter the third mark: \n";
    cin >> Mark3;

    Average = (Mark1 + Mark2 + Mark3) / 3;

    cout << "The average of marks is: " << Average << endl;

    return (0);
}