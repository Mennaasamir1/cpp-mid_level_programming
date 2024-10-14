#include <iostream>
#include <cmath>
using namespace std;

 //problem #31
int main(void)
{
    short number, Power;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Enter power: ";
    cin >> Power;

    cout << number << " ^ " << Power << " = " << pow(number, Power) << endl;

    /*
    cout << number <<" ^ 2 = " << round(pow(number, 2)) << endl;
    cout << number <<" ^ 3 = " << round(pow(number, 3)) << endl;
    cout << number <<" ^ 4 = " << round(pow(number, 4)) << endl;
    */
    return (0);
}