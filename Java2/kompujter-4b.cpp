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
    }

    Kompjuter(string brendi, string procesori, int memoria, int ram)
    {
        this->brendi = brendi;
        this->procesori = procesori;
        this->memoria = memoria;
        this->ram = ram;
    }

    ~Kompjuter()
    {
        cout << "Brenda destruktorit" << endl;
    }

    void setBrendi(string brendi)
    {
        this->brendi = brendi;
    }

    string getBrendi()
    {
        return this->brendi;
    }

    void setProcesori(string procesori)
    {
        this->procesori = procesori;
    }

    string getProcesori()
    {
        return this->procesori;
    }

    char shkronja()
    {
        return this->brendi[0];
    }

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
    Kompjuter k2("HP", "Intel", 512, 16); // shembuj i konstruktorit me parametra
    k1.setBrendi("Dell");
    k1.setProcesori("Intel");
    k1.memoria = 512;
    k1.ram = 16;

    cout << "Brendi: " << k1.getBrendi() << endl;
    string procesori = k1.getProcesori();
    cout << "Procesori: " << procesori << endl;
    cout << "Memoria: " << k1.memoria << endl;
    cout << "RAM: " << k1.ram << endl;

    k1.validimi();

    cout << "Shkronja e pare e brendit: " << k1.shkronja() << endl;

    return 0;
}