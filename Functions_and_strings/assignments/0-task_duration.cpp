#include "main.h"
/**
 * TaskInSeconds - calculates the number of seconds to finish a task
 * @days: num of days
 * @hours: num of hours
 * @minutes: num of minutes
 * @seconds: num of seconds
 * Return: total num of seconds
 */
int TaskInSeconds(int days, int hours, int minutes, int seconds)
{
    int DaysToSec, HoursToSec, MinToSec;

    DaysToSec = days * 24 * 60 * 60;
    HoursToSec = hours * 60 * 60;
    MinToSec = minutes * 60;

    return(DaysToSec + HoursToSec + MinToSec + seconds);
}