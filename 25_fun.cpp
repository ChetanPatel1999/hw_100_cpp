// with return type , with argument
#include <iostream>
using namespace std;
int add(int a, int b)
{
    return (a + b);
}
int main()
{
    cout << "sum = " << add(12, 6) << endl;
    cout << "sum = " << add(5, 8) << endl;
    int res = add(4, 12);
    cout << "sum = " << res << endl;
    return 0;
}