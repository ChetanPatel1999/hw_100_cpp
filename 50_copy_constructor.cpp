// copy constructor
#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    emp() {}
    emp(int a, int b) // parameterized constructor
    {
        id = a;
        sal = b;
    }
    emp(emp &obj) // copy constructor
    {
        cout << "copy constructor is called" << endl;
        id = obj.id + 5;
        sal = obj.sal + 1000;
    }
    void display()
    {
        cout << "emp info ...." << endl;
        cout << "emp id : " << id << endl;
        cout << "emp sal : " << sal << endl;
    }
};
int main()
{
    emp e1(101, 12000), e2(e1);// my copy  constructor is called
    emp e3 = e1;// my copy constructor is called
    emp e4;
    e4 = e1; // default copy constructor
    e1.display();
    e2.display();
    e3.display();
    e4.display();
    return 0;
}