#include <iostream>
class Radnik
{
private:
    int  plata;
    char Ime[50];

public:
    void setIme(const char i[50])
    {
        for (int j = 0; j < 50; j++)
        {
            Ime[j] = i[j];
        }
    };
    const char* getIme() const
    {
        return Ime;
    };
    void set_plata(int p);
    int  getPlata() const;
};

void Radnik::set_plata(int p)
{
    plata = p;
}
int Radnik::getPlata() const
{
    return plata;
}
int main()
{
    Radnik Broj1;
    Broj1.setIme("Izet");
    Broj1.set_plata(50000);
    Radnik Broj2;
    Broj2.set_plata(60000);
    Broj2.setIme("Muhammed");
    Radnik Broj3, Broj4;
    Broj3.setIme("Adnan");
    Broj3.set_plata(70000);
    Broj4.setIme("Hasan");
    Broj4.set_plata(80000);

    for (int i = 1; i < 2; i++)
    {
        std::cout << " Ime : " << Broj1.getIme() << " ,"
                  << " Plata : " << Broj1.getPlata() << " eura." << std::endl;
    }

    return 0;
}