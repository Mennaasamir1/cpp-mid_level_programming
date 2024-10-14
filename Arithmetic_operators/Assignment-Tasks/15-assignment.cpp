#include <iostream>
#include <cmath>
using namespace std;
/**
 * main - entry point
 * 
 * Description - program that prints the duration of a task in seconds.
 * 
 * Return: 0 or 1
 */

// problem #42
int main(void)
{
    unsigned short Days, Hours, Mins, Seconds;
    unsigned int DurationInSec;

    cout << "How many days did it take you? ";
    cin >> Days;

    cout << "How many Hours did it take you? ";
    cin >> Hours;

    cout << "How many minutes did it take you? ";
    cin >> Mins;

    cout << "How many seconds did it take you? ";
    cin >> Seconds;

  
    DurationInSec = (Days * 24 * 60 * 60) + (Hours * 60 * 60) + (Mins * 60) + Seconds;

    cout << "This task took you " << round(DurationInSec) << " seconds to finish it" << endl;
    
    return(0);
}