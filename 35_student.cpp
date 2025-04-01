#include <iostream>
using namespace std;
class student
{
    string name;
    int rno;
    float per;
    static int total_fail;
    static int total_pass;
    static int total_count;
    static string school;

public:
    void set_student(string s, int r, float p)
    {
        name = s;
        rno = r;
        per = p;
        total_count++;
    }
    void result_card()
    {
        cout << "student result card ..." << endl;
        cout << "school name : " << school << endl;
        cout << "student name : " << name << endl;
        cout << "student rno : " << rno << endl;
        cout << "student percentage : " << per << endl;
        if (per > 33)
        {
            cout << "student Pass " << endl;
            total_pass++;
        }
        else
        {
            cout << "student Fail" << endl;
            total_fail++;
        }
        cout << "_____________________________________" << endl;
    }
    void total_result()
    {
        cout << "total results of students :" << endl;
        cout << "total pass : " << total_pass << endl;
        cout << "total Fail : " << total_fail << endl;
        cout << "_____________________________________" << endl;
    }
    void total_std_display()
    {
        cout << "total student : - " << total_count << endl;
        cout << "_____________________________________" << endl;
    }
    void chang_school(string s)
    {
        school = s;
    }
};
int student::total_pass = 0;
int student::total_fail = 0;
int student::total_count = 0;
string student::school = "sanskar vidhya vihar";
int main()
{
    student s1, s2, s3, s4;
    s1.set_student("jaya ", 101, 20);
    s2.set_student("abhimanyu ", 102, 40);
    s3.set_student("mohit", 103, 90);
    s4.set_student("rishi", 103, 70);
    s1.total_std_display();
    s1.result_card();
    s2.result_card();
    s1.chang_school("vivekananda vidhya vihar");
    s3.result_card();
    s4.result_card();
    s1.total_result();
}