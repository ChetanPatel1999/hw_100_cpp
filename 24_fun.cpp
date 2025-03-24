// no return type but with parameter
#include <iostream>
using namespace std;
void add(int a, int b)
{
    int c;
    c = a + b;
    cout << a << " + " << b << " = " << c << endl;
}
void disp(string s)
{
    cout << "string : " << s << endl;
}
void cube(int num)
{
    int c;
    c = num * num * num;
    cout << "cube : " << c << endl;
}
void table(int num)
{
    int tab, i;
    for (i = 1; i <= 10; i++)
    {
        tab = num * i;
        cout << tab << endl;
    }
}
int main()
{
    int i, j;
    table(7);
    for (i = 1, j = 10; i <= 10; i++, j--)
    {
        add(i, j);
    }
    disp("indore");
    cube(5);
    return 0;
}