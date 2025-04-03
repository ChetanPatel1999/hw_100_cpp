// function overloding in cpp
#include <iostream>
using namespace std;
void add(int a, int b)
{
    cout << "sum = " << (a + b) << endl;
}
void add(double a, double b)
{
    cout << "sum = " << (a + b) << endl;
}
void add(double a, int b)
{
    cout << "sum = " << (a + b) << endl;
}
void add(int a, double b)
{
    cout << "sum = " << (a + b) << endl;
}
void add(int a, int b, int c)
{
    cout << "sum = " << (a + b + c) << endl;
}
void add(int a)
{
    cout << "sum = " << (a + 10) << endl;
}
void mul(int a, int b)
{
    cout << "mul = " << (a * b) << endl;
}
int main()
{
    add(34.5, 9);
    add(34, 6);
    add(12.9, 9.1);
    add(4, 6, 8);
    add(14);
    mul(12, 5);
    return 0;
}