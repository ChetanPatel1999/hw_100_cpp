// how to pass object as argument in method
#include <iostream>
using namespace std;
class data
{
    int num1;
    int num2;

public:
   data(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    void display()
    {
        cout << "my data ...\n";
        cout << "num1 : " << num1 << endl;
        cout << "num2 : " << num2 << endl;
    }
    void add_object_data(data obj)
    {
        cout << "num1sum : " << (num1 +obj.num1) << endl;
        cout << "num2sum : " << (num2 +obj.num2) << endl;
    }
};
int main()
{
    data d1(12,4), d2(78,90);
    d1.display();
    d2.display();
    d1.add_object_data(d2);

    return 0;
}