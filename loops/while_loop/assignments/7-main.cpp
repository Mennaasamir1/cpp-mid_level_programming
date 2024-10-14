#include "main.h"

void find_position(int arr[20])
{
    int index;

    for (index = 0; index <= 20; index++)
    {
        //cout << "we are at iteration " << index  << endl;
        if (arr[index] == 22)
        {
            cout << "the element (22) is at position " << index << endl;
            break;
        }
        cout << "we are at iteration " << index  << endl;
    }
}

int main(void)
{
    int arr[20] = {10, 20, 44, 55, 33, 22, 99, 88, 99, 100};
    find_position(arr);
}