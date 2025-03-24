// calculater
#include <iostream>
using namespace std;
void add()
{
    int a, b, c;
    cout << "enter two numbers :";
    cin >> a >> b;
    c = a + b;
    cout << "sum = " << c << endl;
}
void sub()
{
    int a, b, c;
    cout << "enter two numbers :";
    cin >> a >> b;
    c = a - b;
    cout << "sub = " << c << endl;
}
void mul()
{
    int a, b, c;
    cout << "enter two numbers :";
    cin >> a >> b;
    c = a * b;
    cout << "mul = " << c << endl;
}
void div()
{
    int a, b, c;
    cout << "enter two numbers :";
    cin >> a >> b;
    c = a / b;
    cout << "div = " << c << endl;
}
int main()
{
    int num;
    cout << "welcome user ! " << endl;
    cout << "press 1 for add :" << endl;
    cout << "press 2 for sub :" << endl;
    cout << "press 3 for mul :" << endl;
    cout << "press 4 for div :" << endl;
    cout << "press num :";
    cin >> num;
    switch(num)
    {
        case 1: add();break;
        case 2: sub();break;
        case 3: mul();break;
        case 4: div();break;
        default: cout<<"enter 1 to 4 num"<<endl;
    }
    return 0;
}