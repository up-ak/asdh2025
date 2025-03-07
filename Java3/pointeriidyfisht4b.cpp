#include <iostream>
using namespace std;

int main()
{
    double a = 1.1;
    double *pa = &a;
    double **ptr;

    ptr = &pa;

    **ptr = 10;

    cout << "a: " << a << endl;

    return 0;
}