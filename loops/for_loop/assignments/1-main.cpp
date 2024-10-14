#include "main.h"
void print_nums_from_N(int N)
{
    int i;

    for (i = 1; i <= N; i++)
    {
        cout << i << " ";
    }
    cout << "\n";
}
int Read_N_from_user(int N)
{
    return N;
}
void AskForN(int &N)
{
    cout << "Enter N: ";
    cin >> N;
}
int main(void)
{
    int n;

    AskForN(n);
    print_nums_from_N(n);
    cout << "sum of odd numbers: " << SumOFoddNums(Read_N_from_user(n)) << endl;
    cout << "sum of even numbers: " << sumOFeven(Read_N_from_user(n)) << endl;
    
    return (0);
}