#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string Ime;
    int    Prosek;

public:
    Student(string ime, int prosek) : Ime(ime), Prosek(prosek) {}

    void Prikazi()
    {
        cout << "Ime:" << Ime << ",Prosek:" << Prosek << endl;
    }

    int getProsek() const
    {
        return Prosek;
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
    Student s4("Ana", 7);

    s1.Prikazi();
    s2.Prikazi();
    s3.Prikazi();
    s4.Prikazi();

    cout << "Marko je odlican: " << s1.jeOdlican() << endl;
    cout << "Jelena je odlican: " << s2.jeOdlican() << endl;
    cout << "Petar je odlican: " << s3.jeOdlican() << endl;
    cout << "Ana je odlicna: " << s4.jeOdlican() << endl;

    Student* studenti[] = {&s1, &s2, &s3, &s4};

    Student* najboljiStudent = studenti[0];
    for (int i = 1; i < 4; i++)
    {
        if (studenti[i]->getProsek() > najboljiStudent->getProsek())
        {
            najboljiStudent = studenti[i];
        }
    }

    cout << "Najbolji student je: ";
    najboljiStudent->Prikazi();

    return 0;
}
