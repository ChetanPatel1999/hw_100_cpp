// example of operator overloding
#include <iostream>
using namespace std;
template <class t>
class complex
{
    t real;
    t image;

public:
    complex() {}
    complex(t a, t b)
    {
        real = a;
        image = b;
    }
    void display()
    {
        cout << "complex number : (" << real << " + " << image << "i)" << endl;
    }
    complex operator+(complex obj)
    {
        complex res;
        res.real = real + obj.real;
        res.image = image + obj.image;
        return res;
    }
    complex operator-(complex obj)
    {
        complex res;
        res.real = real - obj.real;
        res.image = image - obj.image;
        return res;
    }
};
int main()
{
    complex<float> c1(12.2, 8.3), c2(7.5, 9.8), c3, c4;
    c1.display();
    c2.display();
    c3 = c1 + c2;
    c4 = c1 - c2;
    c3.display();
    c4.display();
    return 0;
}