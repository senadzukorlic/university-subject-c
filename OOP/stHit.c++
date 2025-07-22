#include <iostream>
using namespace std;
#include <cstring>

class Student
{
private:
    char ime[50];
    int  brojGodina;
    int  godinaStudija;

public:
    Student(const char* i = "", int bg = 0, int gs = 0) : brojGodina(bg), godinaStudija(gs)
    {
        strncpy(ime, i, sizeof(ime) - 1);
        ime[sizeof(ime) - 1] = '\0';
    }

    string getIme() const
    {
        return ime;
    }
    int getBrojGodina() const
    {
        return brojGodina;
    }

    int getGodinaStudija() const
    {
        return godinaStudija;
    }
};

int main()
{
    Student Broj1("Izet", 21, 2);

    cout << "Student details:" << std::endl;
    cout << "Ime: " << Broj1.getIme() << std::endl;
    cout << "Broj godina: " << Broj1.getBrojGodina() << std::endl;
    cout << "Godina studija: " << Broj1.getGodinaStudija() << std::endl;

    return 0;
}
