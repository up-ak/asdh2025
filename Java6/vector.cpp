#include <iostream>
#include <vector>
using namespace std;

int min(vector<int> vec)
{
    int min = vec.front();

    for (int i = 1; i < vec.size(); i++)
    {
        if (vec.at(i) < min)
        {
            min = vec.at(i);
        }
    }

    return min;
}

int main()
{
    vector<int> numbers;

    while (true)
    {
        int nr;
        cout << "Vendosni nje numer (-1 per tu ndalur): ";
        cin >> nr;

        if (nr == -1)
        {
            break;
        }

        numbers.push_back(nr);
    }

    cout << "Nr me i vogel eshte: " << min(numbers) << endl;

    // vector<int> vec;

    // vec.push_back(10);
    // vec.push_back(4);

    // vec.pop_back();

    // for (auto it = vec.begin(); it != vec.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // vec.push_back(4);
    // vec.push_back(4);

    // cout << endl;

    // cout << "Size: " << vec.size() << endl;
    // cout << "Capacity: " << vec.capacity() << endl;
}