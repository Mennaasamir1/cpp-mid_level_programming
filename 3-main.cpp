#include <iostream>
using namespace std;

int main(void)
{
    // assignment (3)
    unsigned short int Age, MonthlySalary;
    string Gender;
    string Country, City, FullName;
    bool IsMarried;

    cout << "what's your full name? " << endl;
    cin >> FullName;

    cout << "How old are you? " << endl;
    cin >> Age;

    cout << "where are you from? " << endl;
    cin >> Country;

    cout << "Enter the name of the city you're from: " << endl;
    cin >> City;

    cout << "How much do get paid per month? " << endl;
    cin >> MonthlySalary;

    cout << "Gender? " << endl;
    cin >> Gender;

    cout << "Are you married? " << endl;
    cin >> IsMarried;

    
    cout << "Your profile will appear as follows:" << endl;

    cout << "****************************" << endl;
    cout << "Name: " << FullName << endl;
    cout << "Age: " << Age << endl;
    cout << "City: " << City << endl;
    cout << "Country: " << Country << endl;
    cout << "Monthly salary: " << MonthlySalary << endl;
    cout << "Gender: " << Gender << endl;
    cout << "Married: " << IsMarried << endl;
    cout << "****************************" << endl;
    
    return (0);
}