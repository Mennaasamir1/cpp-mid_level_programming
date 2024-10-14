#include <iostream>
using namespace std;

int main(void)
{
    short int A, B;
    
    /*
    cout << "Simple calculator\n";
    cout << "A + B = " << A + B << endl;
    cout << "A - B = " << A - B << "\n";
    cout << "A / B = " << A / B << endl;
    cout << "A * B = " << A * B << "\n";
    cout << "A % B = " << A % B << endl; 
    */
    
    cout << "12 >= 12 is " << (12 >= 12) << endl;
    
    cout << "12 > 7 is " << (12 > 7) << endl;
    
    cout << "8 < 6 is " << (8 < 6) << endl;
    
    cout << "8 = 8 is " << (8 == 8) << endl;
    
    cout << "12 <= 12 is " << (12 <= 12) << endl;
    
    cout << "7 = 5 is " << (7 == 5) << endl;
    
    cout << "Not (12 >= 12) is " << !(12 >= 12) << endl;
    
    cout << "Not(12 < 7) is " << !(12 < 7) << endl;
    
    cout << "Not(8 < 6) is " << !(8 <  6) << endl;
    
    cout << "Not(8 = 8) is " << !(8 == 18) << endl;
    
    cout << "Not(12 <= 12) is " << !(12 <= 12) << endl;
    
    cout << "Not(7 = 5) is " << !(7 == 15) << endl;
    
    cout << "1 And 1 is " << (1 && 1) << endl;

    cout << "true And 0 is " << (1 && 0) << endl;

    cout << "0 or 1 is " << (0 || 1) << endl;

    cout << "0 or 0 is " << (0 || 0) << endl;

    cout << "Not 0 is " << (!0) << endl;

    cout << "Not(1 or 0) is " << !(1 || 0) << endl;

    cout << "(7 = 7) and (7 > 5) is " << (7 == 7 && 7 > 5) << endl;
    
    cout << "(7 = 7) and (7 < 5) is " << (7 == 7 && 7 < 5) << endl;
    
    cout << "(7 = 7) or (7 > 5) is " << (7 == 7 || 7 > 5) << endl;
    
    cout << "(7 = 7) || (7 > 5) is " << (7 == 7 || 7 < 5) << endl;
    
    cout << "Not(7 = 7) and (7 > 5) is " << (!(7 == 7) && 7 > 5) << endl;
    
    cout << "(7 = 7) and Not (7 < 5) is " << (7 == 7 && !(7 < 5)) << endl;

    cout << "(5 > 6 and 7 = 7) OR (1 or 0)" << " is "<<((5 > 6 && 7 == 7) || (1 || 0)) << endl;
    
    cout << "Not(5 > 6 and 7 = 7) OR (1 or 0)" << " is "<< (!(5 > 6 && 7 == 7) || (1 || 0)) << endl;

    cout << "Not(5 > 6 and 7 = 7) OR Not(1 or 0)" << (!(5 > 6 && 7 == 7) || !(1 || 0)) << endl;

    cout << "not(5 > 6 OR 7 = 7) AND Not(1 or 0)" << (!(5 > 6 || 7 == 7) && !(1 || 0)) << endl;

    cout << "((5 > 6 And 7 <= 8) Or (8 > 1 and 4 <= 3)) AND True" << ((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3) && 1) << endl;

    cout << "((5 > 6 and not (7 <= 8)) and (8 > 1 OR 4 <= 3)) OR TRUE" << ((5 > 6 && !(7 <= 8) && (8 > 1 || 4 <= 3)) || 1) << endl;
    
    
    return (0);
}