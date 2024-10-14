#include "main.h"

int main(void)
{
    strInfo Students[20];
    int length = 0;

    Read_student_info(Students, length);
    Print_student_info(Students, length);

    return(0);
}