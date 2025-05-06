// arrow operator
#include <iostream>
using namespace std;
class emp
{
    public:
    int id;
    float sallary;

public:
    void setdata(int a, float b)
    {
        id = a;
        sallary = b;
    }
    void display()
    {
        cout << "emp id  : " << id << endl;
        cout << "emp sallary : " << sallary << endl;
    }
};
int main()
{
    emp e1;
    emp *ptr;
    ptr = &e1;
    ptr->setdata(101, 12000);
    ptr->display();
    ptr->id=102;
    ptr->sallary=16000;
    e1.display();
    return 0;
}