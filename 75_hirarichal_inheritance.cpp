#include <iostream>
using namespace std;
class parent
{
public:
    parent()
    {
        cout << "0 arg parent constructor is called" << endl;
    }
    parent(int a)
    {
        cout << "1 arg parent constructor is called" << endl;
    }
    parent(int a, int b)
    {
        cout << "2 arg parent constructor is called" << endl;
    }
    void display()
    {
        cout << "parent display is called" << endl;
    }
};
class child1 : public parent
{
public:
    child1() : parent(6)
    {
        cout << "0 arg child1 constructor is called" << endl;
    }
    child1(int a) : parent(5, 9)
    {
        cout << "1 arg child1 constructor is called" << endl;
    }
    child1(int a, int b)
    {
        cout << "2 arg child1 constructor is called" << endl;
    }
};
class child2 : public parent
{
public:
    child2() : parent(6)
    {
        cout << "0 arg child2 constructor is called" << endl;
    }
    child2(int a) : parent(5, 9)
    {
        cout << "1 arg child2 constructor is called" << endl;
    }
    child2(int a, int b)
    {
        cout << "2 arg child2 constructor is called" << endl;
    }
};
int main()
{
    child2 hi(12,89);
    return 0;
}