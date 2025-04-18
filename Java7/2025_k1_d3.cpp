#include <iostream>
#include <vector>
using namespace std;

int emptyVector(vector<int> vec, int target, int &removedMembers)
{
    int sum = 0;

    while (!vec.empty())
    {
        int el = vec.back();

        if (el + sum < target)
        {
            sum += el;
            vec.pop_back();
            removedMembers++;
        }
        else
        {
            break;
        }
    }

    return sum;
}

int main()
{
    vector<int> vec;
    int count = 0;

    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(7);
    vec.push_back(9);
    vec.push_back(41);

    emptyVector(vec, 10, count);

    return 0;
}