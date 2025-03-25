#include <iostream>
using namespace std;
int *fun(int *num)
{
    return num;
}
int main()
{
    int a = 12;
    cout << *(fun(&a));
    return 0;
}