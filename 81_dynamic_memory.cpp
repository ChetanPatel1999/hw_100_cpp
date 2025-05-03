#include <iostream>
using namespace std;
int main()
{
    int *ptr = new int;
    float *ptr1= new float(56.89);
    *ptr = 12;
    cout << "integer value :" << *ptr << endl;//12
    cout << "address of integer value :" << ptr << endl;//56745
    cout << "second integer value  :" << *ptr1 << endl;//12
    delete ptr;
    delete ptr1;
    cout << "integer value :" << *ptr << endl;//12
    return 0;
}