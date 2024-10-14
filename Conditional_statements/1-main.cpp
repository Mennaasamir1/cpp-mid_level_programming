#include <iostream>
using namespace std;

int main(void)
{
    short day;

    cout << "Enter day number: ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "It's friday" << endl;
        break;

    case 2:
        cout << "It's saturday" << endl;
        break;    
    case 3:
        cout << "It's sunday" << endl;
        break;
    case 4:
        cout << "It's monday\n";
        break;
    case 5:
        system("color 6F");
        break;
    case 6:
        cout << "It's wednesday\n";
        break;
    case 7:
        cout << "It's thursday\n";
        break;

    default:
        cout << "not a valid day number\n";
    }
    return (0);
}