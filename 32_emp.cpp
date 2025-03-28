#include <iostream>
using namespace std;
class emp
{
    int id;
    float sallary;

public:
    void set_emp(int a, float b)
    {
        id = a;
        sallary = b;
    }
    void get_emp()
    {
        cout << "emp info : " << endl;
        cout << "emp id : " << id << endl;
        cout << "emp sallary : " << sallary << endl;
        cout << "___________________________________" << endl;
    }
};
int main()
{
    emp e1, e2, e3;
    e1.set_emp(101,20000);
    e2.set_emp(102,15000);
    e3.set_emp(103,50000);
    e1.get_emp();
    e2.get_emp();
    e3.get_emp();
    return 0;
}