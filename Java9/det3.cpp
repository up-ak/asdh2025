#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string frutat[10] = {"molla", "dardha", "dredhza", "domatja", "molla", "kivi", "dardha", "dardha", "rrushi", "portokalli"};

    unordered_map<string, int> parqitja;

    for (int i = 0; i < 10; i++)
    {
        string fruti = frutat[i];
        parqitja[fruti]++;
    }

    for (auto it = parqitja.begin(); it != parqitja.end(); it++)
    {
        cout << "Fruti: " << it->first << " Numri i paraqitjeve: " << it->second << endl;
    }

    return 0;
}