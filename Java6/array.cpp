#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 10> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr.at(i);
    }

    double mes = (double)sum / arr.size();
    double count = 0;

    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        if (*it > mes)
        {
            count++;
        }
    }

    cout << "Mbi mesatare jane " << count << " numra." << endl;

    return 0;
}