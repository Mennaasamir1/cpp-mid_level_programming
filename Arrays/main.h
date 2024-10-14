#ifndef MAIN_H
#define MAIN_H
#include <iostream>
#include <array>
using namespace std;

struct strInfo
{
    short Age;
    string FirstName;
    string phone;
    string lastName;
};

struct strDog
{
    string DogName;
    short Age;
    string Owner;
    string FavoriteFood;
};
void Reading_employees(strInfo employees[100], int length);
void Printing_employees(strInfo employees[100], int lenght);


#endif