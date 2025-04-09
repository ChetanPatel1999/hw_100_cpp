#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    emp(int a=101, float b=5000)// default constructor
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