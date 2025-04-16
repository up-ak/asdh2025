#include <iostream>
#include <queue>
using namespace std;

class RequestManager
{
    priority_queue<string> kerkesat;

public:
    void addRequest(int priority)
    {
        this->kerkesat.push(priority);
    }

    int processRequest()
    {
        int highPriority = this->kerkesat.top();
        this->kerkesat.pop();

        return highPriority;
    }
};

int main()
{
    RequestManager rm;

    rm.addRequest(5);
    rm.addRequest(6);
    rm.addRequest(10);
    rm.addRequest(9);

    int priority = rm.processRequest();

    cout << "Highest priority " << priority;

    return 0;
}