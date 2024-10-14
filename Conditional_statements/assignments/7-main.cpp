#include "main.h"

enum enCountry {Egypt = 1, Syria = 2, Algeria = 3, Jordan = 4};
int main(void)
{
    enCountry country;
    short c;


    cout << "choose a country: " << endl;
    cout << "********************\n";
    cout << "1) Egypt\n";
    cout << "2) Syria\n";
    cout << "3) Algeria\n";
    cout << "4) Jordan\n";
    cout << "********************\n";

    cin >> c;
    country = (enCountry) c;

    switch (country)
    {
        case enCountry::Egypt:
            cout << "your country is Egypt\n";
            break;
        case enCountry::Algeria:
            cout << "your country is Algeria\n";
            break;
        case enCountry::Jordan:
            cout << "your country is Jordan" << endl;
            break;
        case enCountry::Syria:
            cout << "your country is syria" << endl;
            break;
        default:
            cout << "not available" << endl;
    }

  


    return (0);
}