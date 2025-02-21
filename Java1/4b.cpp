#include <iostream>
using namespace std;

class Point
{
    int x;
    int y;

public:
    string emri;

    Point(int _x, int _y)
    {
        x = _x;
        y = _y;
    }

    void print()
    {
        cout << x << " " << y << endl;
    }
};

class Liber
{
    int id;
    int nrFaqeve;

public:
    string emri;
    string autori;

    Liber()
    {
        cout << "U kriju nje liber" << endl;
    }

    Liber(int _id, int _nrFaqeve, string _emri, string _autori)
    {
        cout << "U kriju nje liber me parametra" << endl;
        id = _id;
        nrFaqeve = _nrFaqeve;
        emri = _emri;
        autori = _autori;
    }

    void printo()
    {
        cout << "Id: " << id << endl;
        cout << "Emri: " << emri << endl;
        cout << "Autori: " << autori << endl;
        cout << "Nr. Faqeve: " << nrFaqeve << endl;
    }

    void vendosId(int _id)
    {
        id = _id;
    }

    void vendosNrFaqeve(int _nrFaqeve)
    {
        nrFaqeve = _nrFaqeve;
    }
};

int main()
{
    Liber libri1;

    libri1.emri = "Meshari";
    libri1.autori = "Gjon Buzuku";
    libri1.vendosId(23112);
    libri1.vendosNrFaqeve(200);

    libri1.printo();

    Liber libri2(213123, 100, "Meshari", "Gjon Buzuku");

    libri2.printo();

    return 0;
}