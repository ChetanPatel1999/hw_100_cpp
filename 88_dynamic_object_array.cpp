// dynamic object
#include <iostream>
using namespace std;
class emp
{
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
        cout<<"emp info : "<<endl;
        cout << "emp id  : " << id << endl;
        cout << "emp sallary : " << sallary << endl;
        cout<<"---------------------------------------"<<endl;
    }
    void pay_sallary(int day)
    {
        float perday = sallary / 30.0;
        float total_sallary = day * perday;
        cout << "pay sallary : " << total_sallary << endl;
    }
};
int main()
{
    emp *ptr = new emp[3];
    emp *temp = ptr;
    int i;
    ptr->setdata(101, 12000);
    ptr++;
    ptr->setdata(102, 15000);
    ptr++;
    ptr->setdata(103, 18000);
    ptr = temp;
    for (i = 0; i < 3; i++)
    {
        ptr->display();
        ptr++;
    }
    return 0;
}
