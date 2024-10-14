#include <iostream>
using namespace std;

struct _HomeAddress
{
    string Postalcode;
    string streetName;
};
struct _ContactInfo
{
    string phoneNum;
    string Email_address;
};
struct Employee
{
    string FullName;
    short Age;
    string City;
    string Country;
    string Gender;
    bool Married;
    unsigned int MonthlySalary;
    unsigned int YearlySalary;
    _HomeAddress Home;
    _ContactInfo contact;
};
int main(void)
{
    Employee First_employee;

    First_employee.FullName = "Menna samir Hassan";
    First_employee.Age = 23;
    First_employee.Country = "Egypt";
    First_employee.Gender = "Female";
    First_employee.MonthlySalary = 12000;
    First_employee.YearlySalary = First_employee.MonthlySalary * 12;
    First_employee.Home.Postalcode = "15456";
    First_employee.contact.phoneNum = "01027045565";
    First_employee.contact.Email_address = "Menna_2011@outlook.com";
    First_employee.Married = true;
    First_employee.Home.streetName = "Faisal district";

    cout << "***************************" << endl;
    cout << "Name: " << First_employee.FullName << endl;
    cout << "Age: " << First_employee.Age << endl;
    cout << "City: " << First_employee.City << endl;
    cout << "Country: " << First_employee.Country << endl;
    cout << "Monthly salary: " << First_employee.MonthlySalary << endl;
    cout << "Yearly Salary: " << First_employee.YearlySalary << endl;
    cout << "Gender: " << First_employee.Gender << endl;
    cout << "Married: " << First_employee.Married << endl << endl;
    cout << "To contact this person: " << endl;
    cout << "Phone number: " << First_employee.contact.phoneNum << endl;
    cout << "Email Address: " << First_employee.contact.Email_address << endl;

    




    return (0);
}