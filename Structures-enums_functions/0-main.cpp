#include <iostream>
using namespace std;

struct strInfo
{
    string FullName;
    string phone;
    string country;
    string city;
    int monthlySalary;
    string Gender;
    string maritalStatus;
    short Age;
};

void ReadInfo(strInfo &info)
{
    cout << "Enter your fullname: \n";
    getline(cin, info.FullName); // getline(cin, string to be printed)

    cout << "Enter your phone number: \n";
    cin >> info.phone;

    cout << "how old are you? \n";
    cin >> info.Age;

    cout << "Country: \n";
    cin >> info.country;

    cout << "City: \n";
    cin >> info.city;

    cout << "Gender: " << endl;
    cin >> info.Gender;

    cin.ignore(1, '\n');
    cout << "Marital status: " << endl;
    getline(cin, info.maritalStatus);

    cout << "Monthly salary: " << endl;
    cin >> info.monthlySalary;  
}

void PrintInfo(strInfo Info)
{
    cout << "******************************\n";
    cout << "\nYour information will appear as follows: \n" << endl;
    cout << "Full name: "<<Info.FullName << endl;
    cout << "Phone number: " <<Info.phone << endl;
    cout << "Age: " <<Info.Age << " years old" << endl;
    cout << "marital status: " << Info.maritalStatus << endl;
    cout << "Monthly salary: " << Info.monthlySalary <<endl;
    cout << "Country: " << Info.country << endl;
    cout << "City: " << Info.city << endl;
    cout << "\n****************************\n";
}


int main(void)
{
    strInfo student1, student2;

    ReadInfo(student1);
    PrintInfo(student1);


    return(0);
}