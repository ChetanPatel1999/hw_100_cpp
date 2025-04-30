#include <iostream>
using namespace std;
class data;
class other
{
public:
    void display1(data d1);
    void display2(data d1);
};
class data
{
    int num1;
    int num2;

public:
    friend void other::display1(data);
    friend void other::display2(data);
    void setdata(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
};

void other::display1(data d1)
{
    cout << " num1 : " << d1.num1 << endl;
}
void other::display2(data d1)
{
    cout << " num2 : " << d1.num2 << endl;
}
int main()
{
    data d1;
    d1.setdata(12, 67);
    other o1;
    o1.display1(d1);
    o1.display2(d1);
    return 0;
}