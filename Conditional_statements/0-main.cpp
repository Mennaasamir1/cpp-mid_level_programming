#include <iostream>
using namespace std;

int main(void)
{
    short time = 9;

    if (time < 10)
    {
        cout << "Good morning\n";
    }

    else if (time < 20)
    {
        cout << "Good afternoon\n";
    }
    else
    {
        cout << "Good evening\n";
    }

    return (0);
}