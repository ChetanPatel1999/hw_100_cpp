// example of operator overloding
#include <iostream>
using namespace std;
class complex
{
    int real;
    int image;

public:
    complex() {}
    complex(int a, int b)
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
    complex c1(12, 8), c2(7, 9), c3, c4;
    c1.display();
    c2.display();
    c3 = c1 + c2;
    c4 = c1 - c2;
    c3.display();
    c4.display();
    return 0;
}