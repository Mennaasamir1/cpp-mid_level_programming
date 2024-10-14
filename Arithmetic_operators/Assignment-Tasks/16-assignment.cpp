#include <iostream>
#include <cmath>
using namespace std;
/**
 * main - Entry point
 * 
 * Description - a program that prints the Duration of a project in days,
 * hours, minutes and seconds.
 * 
 * Return: 0 or 1
 */

// problem #43
int main(void)
{
    unsigned int TotalSeconds;

    unsigned int SecondsPerDay, SecondsPerHour, SecondsPerMin;
    unsigned short Days, Hours, Minutes, Seconds, Remainder;

    cout << "Enter number of seconds: ";
    cin >> TotalSeconds;

    SecondsPerDay = 24 * 60 * 60;
    SecondsPerHour = 60 * 60;
    SecondsPerMin = 60;

    Days = floor(TotalSeconds / SecondsPerDay);
    Remainder = TotalSeconds % SecondsPerDay;

    Hours = floor(Remainder / SecondsPerHour);
    Remainder = Remainder % SecondsPerHour;

    Minutes = floor(Remainder / SecondsPerMin);
    Remainder = Remainder % SecondsPerMin;

    Seconds = Remainder;

    cout << Days << ":" << Hours << ":" << Minutes << ":" << Seconds << endl;

    return (0);
}