#include <iostream>
using namespace std;

int main(void)
{
    string Alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string s1 = "30", s2 = "40", s3, fullName;
    short sum;

    cout << "The length of the alphabets string = " << Alphabets.length() << endl;

    cout << "the second letter in this string: " << Alphabets[2] << endl;
    s3 = s1 + s2;
    cout << "the concatination of 30 and 40: " << s3 << endl;
    sum = stoi(s1) + stoi(s2);

    cout << "the sum of 30 and 40 = " << sum << endl;

    cout << "Enter name: ";
    getline(cin , fullName);
    cout << fullName << endl;
    return (0);


}