#include <iostream>
using namespace std;

class Complex
{
private:
    float real, imagin;

public:
    Complex(float r = 0, float i = 0)
    {
        real   = r;
        imagin = i;
    }

    Complex saberi(const Complex& y)
    {
        Complex temp;
        temp.real   = real + y.real;
        temp.imagin = imagin + y.imagin;
        return temp;
    }

    void prikazi()
    {
        cout << real << " + " << imagin << "i" << endl;
    }
};

int main()
{
    Complex a(1.0, 2.0);
    Complex b(3.0, 4.0);

    Complex c = a.saberi(b);

    cout << "a = ";
    a.prikazi();

    cout << "b = ";
    b.prikazi();

    cout << "c = ";
    c.prikazi();

    return 0;
}
