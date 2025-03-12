#include <iostream>
using namespace std;

class Contact
{
public:
    string name;
    string number;

    Contact()
    {
    }

    Contact(string name, string number)
    {
        this->name = name;
        this->number = number;
    }

    void print()
    {
        cout << "Name: " << this->name << endl;
        cout << "Number: " << this->number << endl;
    }
};

class Phonebook
{
    Contact *contacts = nullptr;
    int index = 0;

public:
    string name;

    Phonebook(string name, int size)
    {
        this->name = name;
        this->contacts = new Contact[size];
    }

    void addContact(string name, string number)
    {
        Contact c1(name, number);

        contacts[index] = c1;
        // ose *(contacts + index) = c1;
        index++;
    }

    void listContacts()
    {
        cout << "----------" << this->name << "----------" << endl;
        for (int i = 0; i < index; i++)
        {
            this->contacts[i].print();
            cout << "----------------" << endl;
        }

        cout << "----------" << this->name << "----------" << endl;
    }

    void findNumber(string name)
    {
        for (int i = 0; i < index; i++)
        {
            Contact c = this->contacts[i];

            if (c.name == name)
            {
                cout << "Number: " << c.number << endl;
            }
        }
    }

    void editNumber(string name, string newNumber)
    {
        for (int i = 0; i < index; i++)
        {
            Contact *c = &this->contacts[i];

            if (c->name == name)
            {
                c->number = newNumber;
            }
        }
    }

    ~Phonebook()
    {
        delete[] this->contacts;
    }
};

int main()
{
    Phonebook libri("Work Phonebook", 1000);

    libri.addContact("Admir", "+38344123456");
    libri.addContact("Filan", "+38344123445");

    libri.editNumber("Filan", "1");

    libri.listContacts();

    return 0;
}