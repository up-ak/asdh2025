#include <iostream>
using namespace std;

class Contact
{
public:
    string name;
    string number;

    Contact()
    {
        name = "";
        number = "";
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
    Contact *contacts;
    string name;
    int count;

public:
    Phonebook(string name, int size)
    {
        this->count = 0;
        this->name = name;
        contacts = new Contact[size];
    }

    ~Phonebook()
    {
        delete[] this->contacts;
    }

    void addContact(string name, string number)
    {
        Contact newContact(name, number);

        this->contacts[this->count] = newContact;
        this->count++;
    }

    void listContacts()
    {
        cout << "-------------" << this->name << "--------------" << endl;
        for (int i = 0; i < this->count; i++)
        {
            this->contacts[i].print();
        }
        cout << "-------------" << this->name << "--------------" << endl;
    }

    void editContact(string name, string newNumber)
    {
        for (int i = 0; i < this->count; i++)
        {
            if (this->contacts[i].name == name)
            {
                this->contacts[i].number = newNumber;
                break;
            }
        }
    }

    bool findContact(string name, string newNumber)
    {

        for (int i = 0; i < this->count; i++)
        {
            if (this->contacts[i].name == name)
            {
                cout << "Contact positon: " << i + 1;
                return true;
            }
        }
        cout << "Contact not found" << endl;
    }
};

int main()
{
    Phonebook workPhoneBook("Work", 500);

    workPhoneBook.addContact("Filani", "044123456");
    workPhoneBook.addContact("Fisteku", "044321456");

    workPhoneBook.listContacts();

    workPhoneBook.editContact("Filani", "049123456");

    workPhoneBook.listContacts();

    return 0;
}