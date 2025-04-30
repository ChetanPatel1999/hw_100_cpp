#include <iostream>
using namespace std;
class other;
class data
{
    int num1;
    int num2;

public:
    friend other;
    void setdata(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
};
class other
{
public:
    void display1(data d1)
    {
        cout << " num1 : " << d1.num1 << endl;
    }
    void display2(data d1)
    {
        cout << " num2 : " << d1.num2 << endl;
    }
};

int main()
{
    data d1;
    d1.setdata(12, 67);
    other o1;
    o1.display1(d1);
    o1.display2(d1);
    return 0;
}