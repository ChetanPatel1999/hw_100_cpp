#include <iostream>
using namespace std;
class p1
{
public:
    p1()
    {
        cout << "0 arg p1 constructor is called" << endl;
    }
    p1(int a)
    {
        cout << "1 arg p1 constructor is called" << endl;
    }
    p1(int a, int b)
    {
        cout << "2 arg p1 constructor is called" << endl;
    }
};
class p2
{
public:
    p2()
    {
        cout << "0 arg p2 constructor is called" << endl;
    }
    p2(int a)
    {
        cout << "1 arg p2 constructor is called" << endl;
    }
    p2(int a, int b)
    {
        cout << "2 arg p2 constructor is called" << endl;
    }
};
class child : public p2, public p1
{
public:
    child()
    {
        cout << "0 arg child constructor is called" << endl;
    }
    child(int a):p1(45,8),p2(67)
    {
        cout << "1 arg child constructor is called" << endl;
    }
    child(int a, int b)
    {
        cout << "2 arg child constructor is called" << endl;
    }
};
int main()
{
    child c1(89);
    return 0;
}