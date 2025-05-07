// pointer to derived class
#include <iostream>
using namespace std;
class base
{
protected:
    int num1;

public:
    base(int a)
    {
        num1 = a;
    }
    virtual void display()
    {
        cout << "base class display :" << endl;
        cout << "num1 = " << num1 << endl;
    }
};
class derived : public base
{
    int num2;

public:
    derived(int a, int b) : base(a)
    {
        num2 = b;
    }
    void display()
    {
        cout << "derived class display :" << endl;
        cout << "num1 = " << num1 << endl;
        cout << "num2 = " << num2 << endl;
    }
};
int main()
{
    base *b1 = new base(67);
    b1->display();
    delete b1;
    cout << "------------------------" << endl;
    b1 = new derived(34, 89);
    b1->display();
    delete b1;
    return 0;
}
