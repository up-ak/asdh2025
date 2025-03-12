#include <iostream>
using namespace std;

void test()
{
    int *p1 = new int;
    int *p2 = new int;

    *p1 = 10;

    cout << "Vlera ne p1 " << *p1 << endl;

    delete p1;
    delete p2;
}

int main()
{
    int *p = new int;
    int n = 10;
    int *vargu = new int[n];

    vargu[0] = 100;
    vargu[1] = 200;

    cout << "Antarti i pare: " << vargu[0] << endl;
    cout << "Antarti i pare: " << *(vargu + 0) << endl;

    cout << "Antarti i dyte: " << vargu[1] << endl;
    cout << "Antarti i dyte: " << *(vargu + 1) << endl;

    delete p;
    delete[] vargu;

    return 0;
}