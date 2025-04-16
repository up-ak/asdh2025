#include <iostream>
using namespace std;

int main()
{
    int sasiaProdukteve[10] = {10, 10, 30, 14, 15, 66, 100, 32, 123, 0};

    int *ptrSasia = sasiaProdukteve; // &sasiaProdukteve[0]

    *(ptrSasia + 4) -= 2; // sasiaProdukteve[4] -= 2;

    for (int i = 0; i < 10; i++)
    {
        cout << *(ptrSasia + i) << " ";
    }

    return 0;
}