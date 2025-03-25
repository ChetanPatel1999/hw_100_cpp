// with return type , with argument
#include <iostream>
using namespace std;
float add(float a, float b)
{
    return (a + b);
}
int cube(int num)
{
    return (num * num * num);
}
int sum_range(int s, int e)
{
    int sum = 0;
    while (s <= e)
    {
        sum = sum + s; // 10
        s++;           // 4
    }
    return sum;
}
string even_odd(int num)
{
    if (num % 2 == 0)
    {
        return "num is even";
    }
    else
    {
        return "num is odd";
    }
}
int main()
{
    cout << "sum = " << add(12.8, 6.1) << endl;
    cout << "cube = " << cube(4) << endl;
    cout << "sum 5 to 10 : " << sum_range(5, 10) << endl;
    int sum = sum_range(1, 11);
    cout << even_odd(sum);
    return 0;
}