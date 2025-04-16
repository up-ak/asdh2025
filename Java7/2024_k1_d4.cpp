#include <iostream>
#include <vector>
using namespace std;

class BusSchedule
{
    string line_name;
    vector<int> departureTimes;

public:
    BusSchedule(string line_name)
    {
        this->line_name = line_name;
    }

    void addDepartureTime(int hour)
    {
        this->departureTimes.push_back(hour);
    }

    int findNextDeparture(int current_hour)
    {
        int min = -1;

        for (int i = 0; i < departureTimes.size(); i++)
        {
            if (departureTimes[i] > current_hour)
            {
                if (min == -1)
                {
                    min = departureTimes[i];
                }
                else
                {
                    if (departureTimes[i] < min)
                    {
                        min = departureTimes[i];
                    }
                }
            }
        }

        if (min == -1)
        {
            cout << "Nuk ka nisje pas ores: " << current_hour;
        }

        return min;
    }

    void printSchedule()
    {
        for (int i = 0; i < departureTimes.size(); i++)
        {
            cout << "Nisja: " << departureTimes[i] << endl;
        }

        cout << this->findNextDeparture(18);
    }
};

int main()
{
    BusSchedule pt("Prishtine->Tirane");

    pt.addDepartureTime(8);
    pt.addDepartureTime(12);
    pt.addDepartureTime(5);
    pt.addDepartureTime(15);
    pt.addDepartureTime(19);

    cout << pt.findNextDeparture(20);

    return 0;
}