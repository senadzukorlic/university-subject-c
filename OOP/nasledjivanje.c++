#include <iostream>
using namespace std;
class Zivotinja
{
public:
    Zivotinja(char* s, short bg) : ime(s), broj_godina(bg)
    {
        cout << "Konstruktor zivotinje" << endl;
    }
    ~Zivotinja()
    {
        cout << "Destruktor zivotinje" << endl;
    }

protected:
    char* ime;
    short broj_godina;
};
class Macka : public Zivotinja
{
public:
    Macka(char* s, short bg, short t) : Zivotinja(s, bg), tezina(t)
    {
        cout << "Konstruktor macke" << endl;
    }
    ~Macka()
    {
        cout << "Destruktor macke" << endl;
    }

private:
    short tezina;
};
int main()
{
    Zivotinja z("zivotinja", 3);
    Macka     m("maca", 2, 3);

    return 0;
}