#include <iostream>
using namespace std;
class demo
{
public:
    int a;

private:
    int b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "a : " << a << endl;
        cout << "b : " << b << endl;
    }
};
class child : public demo
{
public:
    void set(int x, int y)
    {
        a = x;
        b = y;// because b is private
    }
};
class other
{
public:
    void fun()
    {
        demo d3;
        d3.a = 100;
        d3.b = 78;// because b is private
        cout << "d3.a = " << d3.a << endl;
    }
};
int main()
{
    demo d1;
    d1.a = 34;
    d1.b = 90;// because b is private
    d1.display();
    child c1;
    c1.set(56, 89);
    c1.display();
    other o1;
    o1.fun();
    return 0;
}