#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, string> studentet;

    studentet[12312] = "Jon";
    studentet[1234] = "Marigona";
    studentet[6433] = "Kaon";

    for (auto it = studentet.begin(); it != studentet.end(); it++)
    {
        cout << "Id: " << it->first << " Emri: " << it->second << endl;
    }

    int id;
    cout << "Kerko me id: ";
    cin >> id;

    if (studentet[id] != "")
    {
        cout << "Emri eshte: " << studentet[id] << endl;
    }
    else
    {
        cout << "Nuk u gjet" << endl;
    }

    return 0;
}
