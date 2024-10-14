#include <iostream>
using namespace std;

int main(void)
{
    string str1, str2, str3;
    short int sum;

    cout << "please enter string1: ";
    getline(cin, str1);

    cout << "please enter string2: ";
    cin >> str2;

    cout << "please enter string3: ";
    cin >> str3;
    cout << "**************************\n";

    cout << "The length of string str1: " << str1.length() << endl;
    cout << "characters at 0, 2, 4, 7 positions are: " << str1[0] << " " << str1[2] << " "<< str1[4] << " " << str1[7] << endl;
    cout << "concatenating str2 and str3: " << str2 + str3 << endl;
    cout << str2 << " * " << str3 << " = " << stoi(str2) * stoi(str3) << endl;

    return (0);
}