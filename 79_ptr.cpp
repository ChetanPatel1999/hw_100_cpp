#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    int *ptr;
    ptr = &a;
    cout << "value of a : " << a << endl;//12
    cout << "address of a : " << &a << endl;//76887
    cout << "address of a by ptr : " << ptr << endl;//76887
    cout << "value of a by ptr : " << *ptr << endl; // 12
    *ptr = 89;
    cout << "value of a : " << a << endl;//89
    cout << "value of a by ptr : " << *ptr << endl; // 89
    ptr++;//76891
    cout << "address of a : " << &a << endl;//76887
    cout << "address of a by ptr : " << ptr << endl;//76891
    return 0;
}