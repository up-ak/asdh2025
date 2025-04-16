#include <iostream>
using namespace std;

class Database
{
private:
    string hostname;
    int port;

public:
    string tableName;
    string dbType;

    Database()
    {
        this->hostname = "";
        this->port = -1;
        this->tableName = "";
        this->dbType = "";
    }

    void setHostname(string hn)
    {
        this->hostname = hn;
    }

    string getHostname()
    {
        return this->hostname;
    }

    void setPort(int p)
    {
        this->port = p;
    }

    int getPort()
    {
        return this->port;
    }

    void connect(int p, string hn)
    {
        this->port = p;
        this->hostname = hn;

        cout << "Lidhja eshte e suksesshme" << endl;
    }

    bool checkConnection()
    {
        if (this->hostname == "" || this->port == -1)
        {
            cout << "Lidhja është e pavlefshme" << endl;

            return false;
        }

        return true;
    }
};

int main()
{
    Database db;

    db.tableName = "Users";
    db.dbType = "fwerew";

    db.connect(65, "sql-db.telegrafi.com");

    bool uKonektua = db.checkConnection();

    if (uKonektua)
    {
        cout << "DB u konektua" << endl;
    }

    return 0;
}