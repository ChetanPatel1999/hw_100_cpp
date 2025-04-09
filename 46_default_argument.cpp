// default parameter/argument in cpp
#include <iostream>
using namespace std;
void add(int a, int b = 5) // b set as default parameter
{
    cout << "sum = " << (a + b) << endl;
}
void bill_generate(int item, int price = 100)
{
    int bill = item * price;
    cout << "total bill = " << bill << endl;
}
int main()
{
    add(3);
    bill_generate(5);
    return 0;
}
