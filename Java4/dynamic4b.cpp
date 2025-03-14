#include <iostream>
using namespace std;

int test()
{
    int a = 1;
    int *p1 = new int(10);

    cout << *p1 << endl;

    delete p1;
}

int main()
{
    int *p = nullptr;

    int v[5];
    int *vp = new int[5];

    for (int i = 0; i < 5; i++)
    {
        v[i] = i * 10;
        vp[i] = i * 100;

        cout << v[i] << endl;
        cout << vp[i] << endl;

        cout << "Print permes pointers" << endl;
        cout << *(vp + i) << endl; // vp[i]
        cout << *(v + i) << endl;  // v[i]
    }

    cout << vp[0] << endl;
    cout << *(vp + 0) << endl; // printon anatrain e pare ose vp[0]
    cout << *(vp + 1) << endl; // vp[1]

    delete p;
    delete[] vp;

    return 0;
}