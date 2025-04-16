#include <iostream>
using namespace std;

class MathUtils
{
public:
    void calculateFactorial(int n, int &rez)
    {
        int f = 1;
        for (int i = n; i > 0; i--)
        {
            f *= i;
        }

        rez = f;
    }
};

int main()
{
    MathUtils utils;
    int rezulatati;

    utils.calculateFactorial(15, rezulatati);

    cout << rezulatati;

    return 0;
}
