#include <iostream>
using namespace std;

void faktorieli(int n, int *pr)
{
    int rez = 1;

    for (int i = 1; i <= n; i++)
    {
        rez *= i;
    }

    *pr = rez;
}

int main()
{
    int nr = 5;

    int rez;

    faktorieli(nr, &rez);

    cout << "Faktorieli i " << nr << " eshte: " << rez << endl;

    return 0;
}