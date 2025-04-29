#include <iostream>
using namespace std;
class parent
{
public:
    int a;

protected:
    int b;

private:
    int c;
};
class child : protected parent
{
    public:
    void fun()
    {
        a=12;
        b=90;
    }
};
class child2: public child
{
    public:
    void fun2()
    {
        a=12;
        b=90;
    }
};
int main()
{
     child c1;
     c1.a=67;
     c1.b=67;
    return 0;
}