// dynamic object
#include <iostream>
using namespace std;
class emp
{
    int id;
    float sallary;
    static int count;

public:
    void setdata()
    {
        cout << "enter emp" << ++count << " info : " << endl;
        cout << "enter emp id : " << endl;
        cin >> id;
        cout << "enter emp sallary : " << endl;
        cin >> sallary;
    }
    void display()
    {
        cout << "emp" << ++count << " info : " << endl;
        cout << "emp id  : " << id << endl;
        cout << "emp sallary : " << sallary << endl;
        cout << "---------------------------------------" << endl;
    }
    void pay_sallary(int day)
    {
        float perday = sallary / 30.0;
        float total_sallary = day * perday;
        cout << "pay sallary : " << total_sallary << endl;
    }
    static void setcount(int a)
    {
        count = 0;
    }
};
int emp::count = 0;
int main()
{
    emp *ptr = new emp[3];
    emp *temp = ptr;
    int i;
    for (i = 0; i < 3; i++)
    {
        ptr->setdata();
        ptr++;
    }
    ptr = temp;
    emp::setcount(0);
    for (i = 0; i < 3; i++)
    {
        ptr->display();
        ptr++;
    }
    return 0;
}
