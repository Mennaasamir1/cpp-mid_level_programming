#include "main.h"

int main(void)
{
    short age;
    string License;

    Ask_user(age, License);
    Check_eligibility(age, License);
    
    return (0);
}