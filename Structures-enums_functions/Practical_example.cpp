#include <iostream>
using namespace std;

enum enColor {Red, Green, Yellow, Blue};
enum enGender {Male, Female};
enum enMaritalSatatus {Single, Married, InRelationship};
enum ennums{blue, white, green};
struct stAddress
{
    string streetName;
    string BuildingNo;
    string POBox;
    string ZipCode;
};

struct stContactInfo
{
    string phone;
    string Email;
    stAddress address;
};

struct stPerson
{
    string FirstName;
    string LastName;
    stContactInfo contact_info;
    enMaritalSatatus MaritalStatus;
    enGender Gender;
    enColor FavoriteColor;
};


int main(void)
{
    stPerson Person1;
    

    Person1.FirstName = "Menna";
    Person1.LastName = "Samir";
    Person1.FavoriteColor = enColor::Blue;
    Person1.Gender = enGender::Female;
    Person1.MaritalStatus = enMaritalSatatus::InRelationship;
    Person1.contact_info.phone = "01027045565";
    Person1.contact_info.Email = "Menna_2011@outlook.com";
    Person1.contact_info.address.BuildingNo = "No. 22";
    Person1.contact_info.address.POBox = "4444";
    Person1.contact_info.address.streetName = "Faisal district";
    Person1.contact_info.address.ZipCode = "156788";
    
    cout << Person1.FirstName << endl;
    cout << Person1.LastName << endl;
    cout << Person1.Gender << endl;
    cout << "\nTo contact this person:" << endl;
    cout << Person1.contact_info.Email << endl;
    cout << Person1.contact_info.phone << endl;

    return (0);
}