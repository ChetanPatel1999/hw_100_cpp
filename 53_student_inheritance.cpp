#include <iostream>
using namespace std;
class student
{
    string name;
    int rno;
    int fees;

public:
    void set_student(string s, int a, int b)
    {
        name = s;
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
class mathstd:public student
{
    int math;
    int physics;
    int chemistry;

public:
    void set_marks(int a, int b, int c)
    {
        math = a;
        physics = b;
        chemistry = c;
    }
    void disp_marks()
    {
        cout << "student marks : " << endl;
        cout << "math : " << math << endl;
        cout << "physics : " << physics << endl;
        cout << "chemistry : " << chemistry << endl;
        cout << "________________________________________"<< endl;
    }
};
class comstd : public student
{
    int account;
    int bussiness;
    int ip;

public:
    void set_marks(int a, int b, int c)
    {
        account = a;
        bussiness = b;
        ip = c;
    }
    void disp_marks()
    {
        cout << "student marks : " << endl;
        cout << "account : " << account << endl;
        cout << "bussiness : " << bussiness << endl;
        cout << "ip : " << ip << endl;
        cout << "________________________________________"<< endl;
    }
};
int main()
{
    mathstd s1;
    s1.set_student("mohit", 101, 100000);
    s1.set_marks(50, 30, 90);
    s1.disp_student();
    s1.disp_marks();
    comstd s2;
    s2.set_student("raj", 102, 200000);
    s2.set_marks(60, 50, 75);
    s2.disp_student();
    s2.disp_marks();
    return 0;
}