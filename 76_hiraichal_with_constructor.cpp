#include <iostream>
using namespace std;
class student
{
    string name;
    int rno;
    int fees;

public:
    student(string s1, int a, int b)
    {
        name = s1;
        rno = a;
        fees = b;
    }
    void disp_student()
    {
        cout << "student info : " << endl;
        cout << "student name : " << name << endl;
        cout << "student rno : " << rno << endl;
        cout << "student fees : " << fees << endl;
    }
};
class mathstd : public student
{
    int math;
    int physics;
    int chemistry;

public:
    mathstd(string s1, int a, float b, int c, int d, int e) : student(s1, a, b)
    {
        math = c;
        physics = d;
        chemistry = e;
    }
    void disp_marks()
    {
        cout << "student marks : " << endl;
        cout << "math : " << math << endl;
        cout << "physics : " << physics << endl;
        cout << "chemistry : " << chemistry << endl;
        cout << "________________________________________" << endl;
    }
};
class comstd : public student
{
    int account;
    int bussiness;
    int ip;

public:
    comstd(string s1, int a, float b, int c, int d, int e) : student(s1, a, b)
    {
        account = c;
        bussiness = d;
        ip = e;
    }
    void disp_marks()
    {
        cout << "student marks : " << endl;
        cout << "account : " << account << endl;
        cout << "bussiness : " << bussiness << endl;
        cout << "ip : " << ip << endl;
        cout << "________________________________________" << endl;
    }
};
int main()
{
    mathstd s1("mohit", 101, 100000, 50, 30, 90);
    s1.disp_student();
    s1.disp_marks();
    comstd s2("raj", 102, 200000, 60, 50, 75);
    s2.disp_student();
    s2.disp_marks();
    return 0;
}