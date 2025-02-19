#include <iostream>

using namespace std;

class Liber
{
    int id;
    int nrFaqeve;

public:
    string emri;
    string autori;

    Liber(int _id, int _nrFaqeve, string _emri)
    {
        id = _id;
        nrFaqeve = _nrFaqeve;
        emri = _emri;

        cout
            << "U krijua nje objekt i tipit Libri" << endl;
    }

    void vendosId(int _id)
    {
        id = _id;
    }

    void shtyp()
    {
        cout << "Emri: " << emri << endl;
        cout << "Autori: " << autori << endl;
        cout << "Id: " << id << endl;
        cout << "Nr Faqeve: " << nrFaqeve << endl;
    }
};

int main()
{
    Liber libri1(11111, 213, "Lugjet e verdha");

    libri1.autori = "Filan Fisteku";

    libri1.shtyp();

    return 0;
}