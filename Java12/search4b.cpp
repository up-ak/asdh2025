#include <iostream>
#include <vector>
using namespace std;

bool search(vector<int> v, int x)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v.at(i) == x)
        {
            return true;
        }
    }

    return false;
}

bool binarySearch(vector<int> v, int x)
{
    if (v.empty())
    {
        return false;
    }

    int mid = v.size() / 2;

    if (v[mid] == x)
    {
        return true;
    }

    if (x < v[mid])
    {
        vector<int> leftSide;
        for (int i = 0; i < mid; i++)
        {
            leftSide.push_back(v.at(i));
        }

        return binarySearch(leftSide, x);
    }
    else
    {
        vector<int> rightSide;
        for (int i = mid + 1; i < v.size(); i++)
        {
            rightSide.push_back(v.at(i));
        }

        return binarySearch(rightSide, x);
    }
}

int main()
{
    vector<int> vs;

    vs.push_back(-100);
    vs.push_back(1);
    vs.push_back(10);
    vs.push_back(11);
    vs.push_back(30);
    vs.push_back(50);
    vs.push_back(70);
    vs.push_back(100);
    vs.push_back(232);
    vs.push_back(400);

    cout << binarySearch(v, 7);

    return 0;
}