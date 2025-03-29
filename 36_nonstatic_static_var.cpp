// non static / static variable
#include <iostream>
using namespace std;
class demo
{
    int a;        // non static
    int b;        // non static
    static int c; //  static
    static int d; //  static
public:
    void setdata(int p, int q, int r, int s)
    {
        a = p;
        b = q;
        c = r;
        d = s;
    }
    void display()
    {
        cout << "a,b = " << a << "," << b << endl;
        cout << "c,d = " << c << "," << d << endl;
    }
};
int demo::c; // must need to redeclare class static variable out side class using this formate
int demo::d;
int main()
{
    demo d1, d2, d3;
    d1.setdata(12, 13, 100, 200);
    d2.setdata(14, 15, 300, 400);
    d3.setdata(16, 17, 500, 600);
    d1.display();
    d2.display();
    d3.display();
    return 0;
}