#include "main.h"
/**
 * Your_name - prints the user's name.
 */
void Your_name()
{
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Your name is: " << name << endl; 
}