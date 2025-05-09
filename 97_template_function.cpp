// template with function
#include <iostream>
using namespace std;
template <class t>
void display(t data)
{
    cout << "data : " << data << endl;
}
template <class t1, class t2>
void add(t1 a, t2 b)
{
    cout << "sum = " << (a + b) << endl;
}
void add(int a, int b)
{
    cout<<"without template function call"<<endl;
    cout << "sum = " << (a + b) << endl;
}
int main()
{
    display(56);
    display("home");
    display(45.67);
    display('K');
    add(12.90, 5.8);
    add(12.90, 5);
    add(1, 5);//
    return 0;
}