#include <iostream>
using namespace std;
int count=1;
class emp
{
    int id;
    float sallary;

public:
    void set_emp()
    {
        cout<<"enter emp"<<count++<<" info : "<<endl;
        cout<<"enter emp id : ";
        cin>>id;
        cout<<"enter emp sallary :";
        cin>>sallary;
    }
    void get_emp()
    {
        cout << "emp"<<count++<<" info : " << endl;
        cout << "emp id : " << id << endl;
        cout << "emp sallary : " << sallary << endl;
        cout << "___________________________________" << endl;
    }
};
int main()
{
    emp e1, e2, e3,e4;
    e1.set_emp();
    e2.set_emp();
    e3.set_emp();
    e4.set_emp();
    count=1;
    e1.get_emp();
    e2.get_emp();
    e3.get_emp();
    e4.get_emp();
    return 0;
}