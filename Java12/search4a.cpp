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

    if (v.at(mid) == x)
    {
        return true;
    }

    if (v.at(mid) < x)
    {
        vector<int> rightVec;
        for (int i = mid + 1; i < v.size(); i++)
        {
            rightVec.push_back(v.at(i));
        }

        return binarySearch(rightVec, x);
    }
    else
    {
        vector<int> leftVec;
        for (int i = 0; i < mid; i++)
        {
            leftVec.push_back(v.at(i));
        }

        return binarySearch(leftVec, x);
    }
}

int main()
{
    // vector<int> v = {1, 0, -5, 6, 10, 100, 4, -20};

    // cout << search(v, 7);

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

    cout << binarySearch(vs, 101);

    binarySearch(vs, 0, vs.size(), 101);

    return 0;
}