#include <iostream>
#include <string>

using namespace std;

class Usluga
{
    string naziv;
    double osnovnaCena;

public:
    Usluga(string Naziv, double OsnovnaCena) : naziv(Naziv), osnovnaCena(OsnovnaCena) {}

    virtual double cena() const
    {
        return osnovnaCena;
    }

    virtual void ispis() const
    {
        cout << "U" << naziv << osnovnaCena << endl;
    }
};