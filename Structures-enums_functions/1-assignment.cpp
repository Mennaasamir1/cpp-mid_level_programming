#include <iostream>
using namespace std;

// practicing enums.
struct EmployerInf
{
    string FullName;
    string country;
    string city;
    string Gender;
    
};

enum Employer1 {Age = 23, MonthlySalary = 10000, Yearly_Salary = 500000};
enum Status {Married, single};

int main(void)
{
    EmployerInf MyFullName; // you should declare a variable to access memebers of structure.
    EmployerInf MyCountry;
    EmployerInf MyCity;
    EmployerInf MyGender;

    MyFullName.FullName = "Menna samir";
    MyCountry.country = "Egypt";
    MyCity.city = "Suez";
    MyGender.Gender = "Female";
    Employer1 MyMonSal = Employer1::MonthlySalary;
    Employer1 MyYearSal = Employer1::Yearly_Salary;
    Employer1 MyAge = Employer1::Age;
    Status MyStatus = Status::single;

    cout << MyFullName.FullName << endl;
    cout << MyCountry.country << endl;
    cout << MyCity.city << endl;
    cout << MyGender.Gender << endl;
    cout << MyMonSal << endl;
    cout << MyYearSal << endl;
    cout << MyAge << endl;
    cout << MyStatus << endl;

    return (0);

}