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
        cout << "complex number : " << real << " + " << image << "i" << endl;
    }
    complex sum(complex obj)
    {
        complex res;
        res.real = real + obj.real;
        res.image = image + obj.image;
        return res;
    }
};
int main()
{
    complex c1(12, 4), c2(8, 5), c3;
    c1.display();
    c2.display();
    c3 = c1.sum(c2);
    c3.display();
    return 0;
}