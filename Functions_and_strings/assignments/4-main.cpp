#include "main.h"
/**
 * main - entry point
 * 
 * Return: 0 or 1
 */
int main(void)
{
    int days, hours, mins, seconds;

    cout << "Enter number of seconds: ";
    cin >> seconds;
    
    convertToDays(seconds);
    /*
    cout << "Enter number of days, hours, minutes, seconds: ";
    cin >> days; cin >> hours; cin >> mins; cin >> seconds;
    cout << "This task took you " << TaskInSeconds(days, hours, mins, seconds) << " seconds to finish" << endl;
    */
    return (0);
}