#include "main.h"

int TakeNum(int from, int to)
{
    int num;
    do
    {
        cout << "enter number between " << from << " and " << to << endl;
        cin >> num;

    } while (num < from || num > to);

    return (num);
}

int main(void)
{

    cout << TakeNum(1, 10) << " is a valid number." << endl;
    return (0);
}