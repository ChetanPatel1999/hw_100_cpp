#include <iostream>
using namespace std;
class demo
{
public:
    int a;
    void setdata(int x)
    {
        a = x;
    }
    void display()
    {
        cout << "a : " << a << endl;
    }
};
class child : public demo
{
public:
    void set(int x)
    {
        a = x;
    }
};
class other
{
public:
    void fun()
    {
        demo d3;
        d3.a = 100;
        cout << "d3.a = " << d3.a << endl;
    }
};
int main()
{
    demo d1;
    d1.a = 34;
    d1.display();
    child c1;
    c1.set(56);
    c1.display();
    other o1;
    o1.fun();
    return 0;
}