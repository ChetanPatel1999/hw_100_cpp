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
    student(string s, int r, float p)
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
    static void total_result()
    {
        cout << "total results of students :" << endl;
        cout << "total pass : " << total_pass << endl;
        cout << "total Fail : " << total_fail << endl;
        cout << "_____________________________________" << endl;
    }
    static void total_std_display()
    {
        cout << "total student : " << total_count << endl;
        cout << "_____________________________________" << endl;
    }
    static void chang_school(string s)
    {
        school = s;
    }
    static void average(student obj1, student obj2)
    {
        float avg;
        avg = (obj1.per + obj2.per) / 2;
        cout << "average of " << obj1.name << " and " << obj2.name << " = " << avg << endl;
        cout << "_____________________________________________________________________" << endl;
    }
    static void average(student obj1, student obj2, student obj3)
    {
        float avg;
        avg = (obj1.per + obj2.per + obj3.per) / 3;
        cout << "average of " << obj1.name << " and " << obj2.name << " and " << obj3.name << " = " << avg << endl;
        cout << "_____________________________________________________________________" << endl;
    }
    static void compare(student obj1, student obj2)
    {
        if (obj1.per > obj2.per)
        {
            cout << obj1.name << " have greater percentage than " << obj2.name << endl;
        }
        else
        {
            cout << obj2.name << " have greater percentage than " << obj1.name << endl;
        }
    }
};
int student::total_pass = 0;
int student::total_fail = 0;
int student::total_count = 0;
string student::school = "sanskar vidhya vihar";
int main()
{
    student s1("jaya ", 101, 20);
    student s2("abhimanyu ", 102, 40);
    student s3("mohit", 103, 90);
    student s4("rishi", 104, 70);
    student::total_std_display();
    s1.result_card();
    s2.result_card();
    student::chang_school("vivekananda vidhya vihar");
    s3.result_card();
    s4.result_card();
    student::total_result();
    student::average(s1, s2);
    student::average(s1, s3);
    student::average(s1, s2, s3);
    student::compare(s2, s1);
}