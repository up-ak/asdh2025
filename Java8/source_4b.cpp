#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<double> ls;

    for (int i = 0; i < 6; i++)
    {
        double nr;
        cout << "Vendose nje nr: ";
        cin >> nr;

        if (nr > 2.0 && nr < 2.9)
        {
            ls.push_back(nr);
        }
        else
        {
            ls.push_front(nr);
        }
    }

    for (auto it = ls.begin(); it != ls.end();)
    {
        if (*it < 2.9 && *it > 2.0)
        {
            it = ls.erase(it);
        }
        else
        {
            it++;
        }
    }

    auto it = ls.begin();
    it++;
    it++;

    ls.insert(it, 100);

    for (auto it = ls.begin(); it != ls.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}