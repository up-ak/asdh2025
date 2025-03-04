#include <iostream>
using namespace std;

class Kompjuter
{
    string brendi;
    string procesori;

public:
    int memoria;
    int ram;

    Kompjuter()
    {
        cout << "Brenda konstruktorit" << endl;
        brendi = "";
        procesori = "";
        memoria = 0;
        ram = 0;
    }

    ~Kompjuter()
    {
        cout << "Brenda destruktorit" << endl;
    }

    // d - setBrendi / getBrendi
    void setBrendi(string brendi)
    {
        this->brendi = brendi;
    }

    string getBrendi()
    {
        return brendi;
    }

    void setProcesori(string procesori)
    {
        this->procesori = procesori;
    }

    string getProcesori()
    {
        return procesori;
    }

    // e - this->brendi[0]
    char shkronja()
    {
        return this->brendi[0];
    }

    // f -
    void validimi()
    {
        if (memoria < 2 * ram)
        {
            ram = 2;
            memoria = 8;

            cout << "Konfigurimi eshte jo valid" << endl;
        }
    }
};

int main()
{
    Kompjuter k1;

    k1.memoria = 512;
    k1.ram = 16;
    k1.setBrendi("HP");
    k1.setProcesori("i7");

    // h - printimi

    cout << "Brendi: " << k1.getBrendi() << endl;
    string procesori = k1.getProcesori();
    cout << "Procesori: " << procesori << endl;
    cout << "Memoria: " << k1.memoria << endl;
    cout << "RAM: " << k1.ram << endl;

    // i
    cout << "Shkronja e pare e brendit: " << k1.shkronja() << endl;
    k1.validimi();

    return 0;
}