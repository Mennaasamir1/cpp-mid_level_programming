#include <iostream>
using namespace std;

short var = 5;

void MyFunction(short &var)
{
    var = 200;

    cout << "The value of var inisde myfunction = " << var << endl;
}

int main(void)
{
    short var = 10;
    MyFunction(var);
    cout << "The value of var inside main function: " << var << endl;
    cout << &var << endl;
/*
    cout << "the value of var inside main function = " << var << endl;
    cout << "the global value of var = " << ::var << endl; /* :: var is global */

    return (0);
}