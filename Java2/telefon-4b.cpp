#include <iostream>
using namespace std;

class Telefon
{
    string modeli;
    double cmimi;

public:
    int memoria;

    Telefon()
    {
        cout << "Vendosni modelin e telefonit: ";
        cin >> modeli;
        cout << "Vendosni cmimin e telefonit: ";
        cin >> cmimi;
        cout << "Vendosni memorien e telefonit: ";
        cin >> memoria;
    }

    // c. void setCmimi(double cmimi); double getCmimi()
    // void setModeli(string modeli); string getModeli()

    void setCmimi(double cmimi)
    {
        if (cmimi < 0)
        {
            cout << "Cmimi nuk mund te jete negativ!" << endl; // log
            return;
        }

        // log
        this->cmimi = cmimi;
    }

    double getCmimi()
    {
        return cmimi;
    }

    void setModeli(string modeli)
    {
        this->modeli = modeli;
    }

    string getModeli()
    {
        return modeli;
    }

    // d. Lind Osmani, Lirik Rexhepi, Olti Rugova
    void zbritje()
    {
        if (this->cmimi > 500)
        {
            this->cmimi = this->cmimi - (this->cmimi * 0.1);
        }
    }
};

int main()
{
    Telefon t1;

    t1.setCmimi(100);
    cout << t1.getCmimi() << endl;

    t1.zbritje();

    return 0;
}