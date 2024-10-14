#include <random>
#include "main.h"
void ReadInputNum(int n)
{
    int counter, num, sum = 0;

    cout << "Enter 5 numbers: " << endl;
    for (counter = 0; counter < n; counter++)
    {
        cin >> num;
        if (num >= 50)
        {
            continue;
        }
        sum += num;
    }
    
    cout << "sum of numbers < 50 = " << sum << endl;
}

int main(void)
{
   
    ReadInputNum(5);

    return (0);
}