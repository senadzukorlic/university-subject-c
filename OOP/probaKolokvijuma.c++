#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string Ime;
    int    Prosek;

public:
    Student(string ime, int prosek)
    {
        Ime    = ime;
        Prosek = prosek;
    }

    void Prikazi()
    {
        cout << "Ime:" << Ime << ",Prosek:" << Prosek << endl;
    }

    bool jeOdlican()
    {
        if (Prosek >= 9)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Student s1("Marko", 9);
    Student s2("Jelena", 8);
    Student s3("Petar", 10);

    s1.Prikazi();
    s2.Prikazi();
    s3.Prikazi();

    cout << "Marko je odlican: " << s1.jeOdlican() << endl;
    cout << "Jelena je odlican: " << s2.jeOdlican() << endl;
    cout << "Petar je odlican: " << s3.jeOdlican() << endl;
    return 0;
}