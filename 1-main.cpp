#include <iostream>
using namespace std;

int main(void)
{
    // assignment (1)
    unsigned short int Age = 23, MonthlySalary = 5000;
    unsigned short int YearlySalary = MonthlySalary * 12;
    string MyName = "Menna samir", city = "Suez", country = "Egypt";
    char Gender = 'F';
    bool Married = false;

    cout << "****************************" << endl;
    cout << "Name: " << MyName << endl;
    cout << "Age: " << Age << endl;
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
    cout << "Monthly salary: " << MonthlySalary << endl;
    cout << "Yearly salary: " << YearlySalary << endl;
    cout << "Gender: " << Gender << endl;
    cout << "Married: " << Married << endl;
    cout << "****************************" << endl;


    cout << "After 5 years, you'll be " << Age + 5 << " years old" << endl;
    return(0); 
}