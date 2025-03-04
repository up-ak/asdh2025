#include <iostream>
using namespace std;

class Telefon
{
    // a
    string modeli;
    double cmimi;

public:
    int memoria;

    // b
    Telefon()
    {
        cout << "Vendosni modelin: ";
        cin >> modeli;
        cout << "Vendosni cmimin: ";
        cin >> cmimi;
        cout << "Vendosni memorien: ";
        cin >> memoria;
    }

    Telefon(string modeli, double cmimi, int memoria)
    {
        this->modeli = modeli;
        this->cmimi = cmimi;
        this->memoria = memoria;
    }

    // c - setModeli(string modeli); setCmimi(double cmimi);
    //  getModeli(); getCmimi();

    void setModeli(string modeli)
    {
        // validim
        // logs
        this->modeli = modeli;
    }

    string getModeli()
    {
        return modeli;
    }

    void zbritje()
    { // Irin, Grejona, Gerti, Jon Vesel, Erion Qerimi, Kaon
        if (cmimi > 500)
        {
            cmimi = cmimi - 0.1 * cmimi;
        }
    }
};

int main()
{
    Telefon tel1;
    Telefon tel2("Samsung", 500.0, 128);

    tel1.memoria = 64;
    tel1.setModeli("Nokia");
    string m = tel1.getModeli();
    tel1.zbritje();

    return 0;
}