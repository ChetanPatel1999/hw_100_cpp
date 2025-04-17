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
class programer:public emp
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
int main()
{
    programer p1;
    p1.set_emp(101,12000);
    p1.set_prgm("java","e-commerse");
    p1.get_emp();
    p1.get_prgm();
    return 0;
}