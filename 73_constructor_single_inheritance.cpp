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
class child : public parent
{
public:
    child() : parent(6)
    {
        cout << "0 arg child constructor is called" << endl;
    }
    child(int a) : parent(5, 9)
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
    child c1(45, 89);
    return 0;
}