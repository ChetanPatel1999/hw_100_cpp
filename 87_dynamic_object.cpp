// dynamic object
#include <iostream>
using namespace std;
class emp
{
    int id;
    float sallary;

public:
    emp(int a, float b)
    {
        id = a;
        sallary = b;
    }
    void display()
    {
        cout << "emp id  : " << id << endl;
        cout << "emp sallary : " << sallary << endl;
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
    emp *ptr = new emp(101, 16000);
    ptr->display();
    ptr->pay_sallary(15);
    delete ptr;
    ptr->display();
    return 0;
}