// method overloding in cpp
#include <iostream>
using namespace std;
class display
{
public:
    void disp(int a)
    {
        cout << "data : " << a << endl;
    }
    void disp(string a)
    {
        cout << "data : " << a << endl;
    }
    void disp(char a)
    {
        cout << "data : " << a << endl;
    }
    void disp(float a)
    {
        cout << "data : " << a << endl;
    }
    void disp(int a, int b)
    {
        cout << "sum : " << (a + b) << endl;
    }
    void disp(int a, int b, int c)
    {
        cout << "hi bro" << endl;
    }
};
int main()
{
    display d1;
    d1.disp(12);
    d1.disp("home");
    d1.disp('K');
    d1.disp(45.9f);
    d1.disp(12, 7);
    d1.disp(12, 7, 9);
    return 0;
}