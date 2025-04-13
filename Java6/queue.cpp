#include <iostream>
#include <queue>
using namespace std;

void f1(queue<int> q, int &rez)
{
    rez = q.back();
}

int main()
{
    queue<int> rreshti;

    rreshti.push(2);
    rreshti.push(5);
    rreshti.push(77);
    rreshti.push(99);

    int rez;

    f1(rreshti, rez);

    cout << "Antari ne fund eshte " << rez;

    return 0;
}