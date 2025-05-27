/*
5.1. Zadatak
Osoba ima ime, datum rođenja i adresu stanovanja. Vrednosti ovih atributa mogu da se pročitaju sa
standardnog ulaza i ispišu na standardni izlaz. Podrazumevano, pre čitanja, ove vrednosti ne
postoje. Đak je osoba koja dodatno ima podatke o nazivu škole koju pohađa i razred u koji ide.
Vrednosti atributa mu se čitaju sa standardnog ulaza, tako što se prvo učitaju podaci za osobu, a
zatim i dodatni podaci o Đaku. Ovi podaci se na isti način i pišu se na standardni izlaz. Zaposleni
je osoba koja ima dodatne podatke o preduzeću u kom radi i naziv odeljenja. Vrednosti atributa mu se
čitaju sa standardnog ulaza, tako što se prvo učitaju osnovni podaci za osobu, a zatim i dodatni
podaci o zaposlenju. Ovi podaci se na isti način i ispisuju na standardni izlaz. Napisati na
programskoj jeziku C++ klase za opisane koncepte. Napisati glavni program koji napravi nekoliko
objekata ovih klasa, učita im vrednosti atributa, a zatim ih sve ispiše na standardnom izlazu.
*/
// osobe.h - Klase osoba, djaka i zaposlenih.
class Osoba
{
    char ime[31], datum[11], adresa[31];

public:
    Osoba()
    {
        ime[0] = datum[0] = adresa[0] = 0;
    }
    virtual void citaj();
    virtual void pisi() const;
};
////////////////
class Djak : public Osoba
{
    char skola[31], razred[7];

public:
    Djak() : Osoba()
    {
        skola[0] = razred[0] = 0;
    }
    void citaj();
    void pisi() const;
};
////////////////
class Zaposlen : public Osoba
{
    char firma[31], odeljenje[31];

public:
    Zaposlen() : Osoba()
    {
        firma[0] = odeljenje[0] = 0;
    }
    void citaj();
    void pisi() const;
};
// osobe.cpp - Metode klasa osoba, djaka i zaposlenih.
#include <iostream>
using namespace std;
void Osoba::citaj()
{
    cout << "Ime i prezime? ";
    cin >> ws;
    cin.getline(ime, 31);
    cout << "Datum rodjenja? ";
    cin.getline(datum, 11);
    cout << "Adresa stanovanja? ";
    cin.getline(adresa, 31);
}
void Osoba::pisi() const
{
    cout << "Ime i prezime: " << ime << endl;
    cout << "Datum rodjenja: " << datum << endl;
    cout << "Adresa stanovanja: " << adresa << endl;
}
void Djak::citaj()
{
    Osoba::citaj();
    cout << "Naziv skole? ";
    cin.getline(skola, 31);
    cout << "Razred? ";
    cin.getline(razred, 7);
}
void Djak::pisi() const
{
    Osoba::pisi();
    cout << "Naziv skole: " << skola << endl;
    cout << "Razred: " << razred << endl;
}
void Zaposlen::citaj()
{
    Osoba::citaj();
    cout << "Naziv firme? ";
    cin.getline(firma, 31);
    cout << "Naziv odeljenja? ";
    cin.getline(odeljenje, 31);
}
void Zaposlen::pisi() const
{
    Osoba::pisi();
    cout << "Naziv firme: " << firma << endl;
    cout << "Naziv odeljenja: " << odeljenje << endl;
}
// osobet.C - Ispitivanje klasa osoba, djaka i zaposlenih.
#include <iostream>
using namespace std;
int main()
{
    Osoba* ljudi[20];
    int    n = 0;
    cout << "Citanje podataka o ljudima\n";
    while (true)
    {
        cout << "\nIzbor (O=osoba, D=djak, Z=zaposlen, K=kraj)? ";
        char izbor;
        cin >> izbor;
        if (izbor == 'K' || izbor == 'k')
            break;
        ljudi[n] = 0;
        switch (izbor)
        {
            case 'O':
            case 'o':
                ljudi[n] = new Osoba;
                break;
            case 'D':
            case 'd':
                ljudi[n] = new Djak;
                break;
            case 'Z':
            case 'z':
                ljudi[n] = new Zaposlen;
                break;
        }
        if (ljudi[n])
            ljudi[n++]->citaj();
    }
    cout << "\nPrikaz procitanih podataka\n";
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        ljudi[i]->pisi();
    }
    return 0;
}