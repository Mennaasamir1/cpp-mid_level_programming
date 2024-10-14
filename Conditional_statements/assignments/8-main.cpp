#include <iostream>
using namespace std;

enum enMonthsOfYear1 
{
 Jan = 1, Feb = 2,
 Mar = 3, Apr = 4, 
 May = 5, Jun = 6, 
 Jul = 7, Aug = 8, 
 sep = 9, Oct = 10, 
 Nov = 11, Dec = 12
};
enMonthsOfYear1 months;

void ShowMonthMenu(void)
{
    cout << "*****************\n";
    cout << "1) January" << endl;
    cout << "2) February" << endl;
    cout << "3) March" << endl;
    cout << "4) April" << endl;
    cout << "5) May" << endl;
    cout << "6) June" << endl;
    cout << "7) July" << endl;
    cout << "8) August" << endl;
    cout << "9) September" << endl;
    cout << "10) October" << endl;
    cout << "11) November" << endl;
    cout << "12) December" << endl;
    cout << "********************\n";
}
enMonthsOfYear1 Read_month(short number)
{

    return ((enMonthsOfYear1) number);
}
string get_month(enMonthsOfYear1 month)
{
    switch (month)
    {
    case enMonthsOfYear1::Jan:
        return ("January");
        break;
    case enMonthsOfYear1::Feb:
        return ("february");
        break;
    case enMonthsOfYear1::Mar:
        return ("March");
        break;
    
    case enMonthsOfYear1::Apr:
        return ("April");
        break;
    
    case enMonthsOfYear1::May:
        return ("May");
        break;
    
    case enMonthsOfYear1::Jun:
        return ("June");
        break;
    
    case enMonthsOfYear1::Jul:
        return ("July");
        break;
    
    case enMonthsOfYear1::Aug:
        return ("August");
        break;
    
    case enMonthsOfYear1::sep:
        return ("September");
        break;
    
    case enMonthsOfYear1::Oct:
        return ("October");
        break;
    
    case enMonthsOfYear1::Nov:
        return ("November");
        break;
    
    case enMonthsOfYear1::Dec:
        return ("December");
        break;

    default:
        return ("not a valid month");
        break;
    }

}
  
int main(void)
{
    short number;

    ShowMonthMenu();

    cout << "Enter month number: ";
    cin >> number;
    //Read_month(months);
    cout << "It's " << get_month(Read_month(number)) << endl;

    return(0);
}