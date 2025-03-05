#include <iostream>
using namespace std;

int main()
{
    double a = 3.14; // adresa e a = 0x123
    double *p = &a;  // adresa e p = 0x456

    double **pp = &p; // adresa e pp = 0x789

    **pp = 2.71; // ndryshimi i vleres se a nepermjet pp

    return 0;
}