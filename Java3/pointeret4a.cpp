#include <iostream>
using namespace std;

int y = 15;

void test2()
{
    int b = 20;
    cout << "b: " << b << endl;
}

void test1(int *pb)
{
    int c = 8;
    int a = 10;

    cout << "a: " << a << endl;
    cout << "pb: " << pb << endl;

    *pb = 50; // ndryshimi i vleres se b permes pointerit
}

int main()
{
    int a = 5;
    int b = 10;

    cout << "Adresa e a: " << &a << endl;

    int *pa = &a;
    int c = *pa;

    cout << "Adresa e a permes pa: " << pa << endl;
    cout << "Vlera e a permes pa: " << *pa << endl;
    *pa = 100; // ndryshimi i vleres se a permes pointerit

    cout << "a: " << a << endl;

    test1(&b);

    cout << "b pas test1: " << b << endl;

    return 0;
}