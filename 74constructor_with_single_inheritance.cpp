#include <iostream>
using namespace std;
class emp
{
    int id;
    float sallary;

public:
    emp(int a,int b)
    {
        id=a;
        sallary=b;
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
    programer(int a, float b, string s1, string s2):emp(a,b)
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
    programer p1(101, 120000, "java", "e-comerce");
    p1.get_emp();
    p1.get_prgm();
    return 0;
}