#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int z = 10;
    int y = 100;

    swap(z, y);

    int a = 4;
    int b = 6;

    swap(a, b);

    // int x = 100;
    // int &x2 = x;

    // x2 = 10;

    // cout << "x: " << x2 << endl;

    return 0;
}