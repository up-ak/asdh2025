#include <queue>
#include <iostream>
using namespace std;

int main()
{
    priority_queue<int> pq;

    pq.push(12);
    pq.push(4);
    pq.push(-4);
    pq.push(23);
    pq.push(0);

    // printo komplet queue

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}
