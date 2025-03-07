#include <iostream>
using namespace std;

int r = 10;

int test1()
{
    int y = 3;

    cout << "y: " << y << endl;
}

int test(int *pa)
{
    int c = 15;
    int b = 44;
    *pa = 55;

    cout << "c: " << c << endl;

    test1();
}

int main()
{
    int a = 5;
    int b = 10;
    int *pa = &a;
    int *pb = &b;

    test(&a);

    cout << "Adresa e a: " << &a << endl;
    cout << "Adresa e a permes pointer: " << pa << endl;
    cout << "Vlera e a: " << a << endl;
    cout << "Vlera e a permes pointer: " << *pa << endl;
    *pa = 55; // njejt si a = 55
    cout << "Vlera e a pas *pa = 55: " << a << endl;

    test();

    return 0;
}