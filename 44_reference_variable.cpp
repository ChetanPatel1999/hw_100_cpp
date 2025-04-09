#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    int &b = a;
    cout << "a = " << a << endl; // 12
    cout << "b = " << b << endl; // 12
    b = 89;
    cout << "a = " << a << endl; // 89
    cout << "b = " << b << endl; // 89
    return 0;
}