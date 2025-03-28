#include <iostream>
using namespace std;

void incrementByValue(int nr, int value)
{
    nr += value;
}

void incrementByReference(int &nr, int value)
{
    nr += value;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 100;

    incrementByReference(x, 15);

    cout << "x: " << x << endl;

    int y = 10;

    swap(x, y);

    cout << "x: " << x << endl;

    // int n = 10;
    // int &m = n; // referenca &

    // m = 100;

    // cout << "n: " << n << endl;
    // cout << "m: " << m << endl;

    return 0;
}