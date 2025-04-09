// non parameterized constructor:- if constructor have no parameter
//parameterized constructor:- if constructor have parameter
#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    emp() // non parameterized constructor
    {
        id = 101;
        sal = 5000;
    }
    emp(int a, int b)//parameterized constructor 
    {
        id = a;
        sal = b;
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
    emp e1, e2(102, 45000);
    e1.display();
    e2.display();
    return 0;
}