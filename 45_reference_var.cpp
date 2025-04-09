#include <iostream>
using namespace std;
void fun(int &a)//a = n
{
    cout<<"a = "<<a<<endl;//12
    a = 90;
}
int main()
{
    int n = 12;
    cout << "n = " << n << endl;//12
    fun(n);
    cout << "n = " << n << endl;//90
    return 0;
}