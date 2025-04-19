// example of multilevel
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
    }
};
class programer : public emp
{
    string lang;
    string project;

public:
    void set_prgm(string s1, string s2)
    {
        lang = s1;
        project = s2;
    }
    void get_prgm()
    {
        cout << "programmer detail : " << endl;
        cout << "language : " << lang << endl;
        cout << "project : " << project << endl;
    }
};
class programmer_manager : public programer
{
    int no_of_emp;

public:
    void set_mng(int a)
    {
        no_of_emp = a;
    }
    void get_mng()
    {
        cout << "no of emp : " << no_of_emp << endl;
    }
};
int main()
{
    programmer_manager m1;
    m1.set_emp(101,120000);
    m1.set_prgm("java","covid portel");
    m1.set_mng(10);
    m1.get_emp();
    m1.get_prgm();
    m1.get_mng();

    return 0;
}