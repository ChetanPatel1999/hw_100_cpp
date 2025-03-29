#include <iostream>
using namespace std;
class student
{
    string name;
    int rno;
    float per;

public:
    void set_student(string s, int r, float p)
    {
        name = s;
        rno = r;
        per = p;
    }
    void display_student()
    {
        cout << "student info" <<endl;
        cout << "student name : " << name << endl;
        cout << "student rno : " << rno << endl;
        cout << "student percentage : " << per << endl;
        cout << "_____________________________________" << endl;
    }
};
int main()
{
    student s1, s2, s3;
    s1.set_student("jaya ", 101, 20);
    s2.set_student("abhimanyu ", 102, 40);
    s3.set_student("mohit", 103, 90);
    s1.display_student();
    s2.display_student();
    s3.display_student();
    return 0;
}