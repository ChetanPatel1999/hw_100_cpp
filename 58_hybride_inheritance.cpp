// hybride inheritance
// virtual base class
#include <iostream>
using namespace std;
class person
{
    string name;

public:
    void set_name(string s1)
    {
        name = s1;
    }
    void get_name()
    {
        cout << "name : " << name << endl;
    }
};
class student : virtual public person
{
    int rno;

public:
    void set_rno(int a)
    {
        rno = a;
    }
    void get_rno()
    {
        cout << "rno : " << rno << endl;
    }
};
class teacher : virtual public person
{
    float sallary;

public:
    void set_sallary(float b)
    {
        sallary = b;
    }
    void get_sallary()
    {
        cout << "sallary : " << sallary << endl;
    }
};
class phd_student : public student, public teacher
{
    string collage;

public:
    void set_collage(string s)
    {
        collage = s;
    }
    void get_collage()
    {
        cout << "collage : " << collage << endl;
    }
};
int main()
{
    phd_student s1;
    s1.set_name("arjun patel");
    s1.set_rno(101);
    s1.set_sallary(12000);
    s1.set_collage("DAVV");
    s1.get_name();
    s1.get_rno();
    s1.get_sallary();
    s1.get_collage();
    return 0;
}