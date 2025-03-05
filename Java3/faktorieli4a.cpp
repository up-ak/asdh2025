#include <iostream>
using namespace std;

// funksion qe llogarit faktorielin apo prodhimi deri ne n
// n! = 1*2*3*...*n
void faktoriel(int n, int *rez)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }

    *rez = f; // vlera e faktorielit ruhet ne adresen e rez
}

int main()
{
    int r;
    faktoriel(10, &r);
    cout << "Faktoriel i 10 eshte: " << r << endl;

    return 0;
}