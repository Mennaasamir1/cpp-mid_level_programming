#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void)
{
    int Num1;
    double Num2 = 18.95;
    string str;
    float num;

    string st1 = "43.22";
    int N1 = 20, N3_int;
    double N2 = 33.5;
    float N3 = 55.24;

    N3_int = N3; // implicit conversion
    N3_int = (int) N3;

    cout <<"string to double, st1 =  " << stod(st1) << endl;
    cout << "string to float, st1 = " << stof(st1) << endl;
    cout << "string to int, st1 = " << stoi(st1) << endl;
    cout << "integer to string, N1 = " << to_string(N1) << endl;
    cout << "double to string, N2 = " << to_string(N2) << endl;
    cout << "float to string, N3 = " << to_string(N3) << endl;
    cout << "float to int, N3 = " << int(N3) << endl;
    cout << "float to int, but by implicit conersion: " << N3_int << endl;
    cout << N3_int << endl;


   // Num1 = Num2; // => implicit conversion
   /*
   Num1 = int(Num2); // => explicit conversion
   Num1 = (int) Num2;
   str = to_string(Num2);
   cout << str << endl;
   */

}