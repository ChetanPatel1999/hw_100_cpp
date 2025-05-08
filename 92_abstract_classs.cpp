#include <iostream>
using namespace std;
class base // abstract class
{
protected:
    int data1;

public:
    void setdata(int data1)
    {
        this->data1 = data1;
    }
    virtual void display() = 0;  // pure virtual function
    virtual int demo(int a) = 0; // pure virtual function
};
class derived : public base
{
public:
    void display()
    {
        cout << "data 1 : " << data1 << endl;
    }
    int demo(int b)
    {
        return b + 5;
    }
};
int main()
{
    derived d1;
    d1.setdata(89);
    d1.display();
    cout << "ans = " << d1.demo(56);
    return 0;
}