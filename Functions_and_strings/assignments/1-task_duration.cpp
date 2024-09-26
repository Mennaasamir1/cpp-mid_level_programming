#include "main.h"
/**
 * convertToSec - converts seconds to days, hours, minutes, seconds
 * @TotalSeconds: total number of seconds
 */
void convertToDays(int TotalSeconds)
{
    int Remainder, SecToDays, SecToHours, SecToMinutes;
    int SecInDay, SecInMin, SecInHour, seconds;

    SecInDay = 24 * 60 * 60;
    SecInHour = 60 * 60;
    SecInMin = 60;

    SecToDays = floor(TotalSeconds / SecInDay);
    Remainder = TotalSeconds % SecInDay;

    SecToHours = floor(Remainder / SecInHour);
    Remainder = Remainder % SecInHour;

    SecToMinutes = floor(Remainder / SecInMin);
    Remainder = Remainder % SecInMin;

    seconds = Remainder;

    cout << SecToDays << ":" << SecToHours << ":" << SecToMinutes << ":" << seconds << endl;


}