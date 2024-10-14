#include <iostream>
using namespace std;


struct stOwner
{
    string FullName;
    string phone;

};
struct car
{
    string Brand;
    string Model;
    short Year;
    stOwner owner;
};

int main(void)
{
    car MyCar1, MyCar2;

    MyCar1.Brand = "BMW";
    MyCar1.Model = "X5";
    MyCar1.Year = 2000;
    MyCar1.owner.FullName = "Menna samir";
    MyCar1.owner.phone = "01027045565";

    MyCar2.Brand = "Ford";
    MyCar2.Model = "Mustang";
    MyCar2.Year = 2022;

    cout << MyCar1.Brand << " " << MyCar1.Model << " " <<  MyCar1.Year << endl;
    cout << MyCar1.owner.FullName <<endl;
    cout << MyCar1.owner.phone <<endl;

    return (0);
}