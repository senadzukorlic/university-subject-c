#include <iostream>
class Radnik
{
public:
    char Ime[50];
    int  staz;
    void ispisiIme() const
    {
        std::cout << "Ime radnika: " << Ime << std::endl;
    }
};

Radnik Nemanja = {"Nemanja", 5};

int main()
{
    Nemanja.ispisiIme();
    return 0;
}