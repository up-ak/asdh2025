#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<double> ls;

    for (int i = 0; i < 6; i++)
    {
        double nr;
        cout << "Vendos numrin: ";
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
            double value = *it;
            it = ls.erase(it);
            cout << "U fshi " << value << endl;
        }
        else
        {
            ++it;
        }
    }

    for (auto it = ls.begin(); it != ls.end(); ++it)
    {
        cout << *it << endl;
    }

    return 0;
}