//friend function
#include <iostream>
using namespace std;
class data
{
    private: 
    int num1;
    int num2;
    friend void display(data);
    public:
    void setdata(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
};
void display(data d1) // friend function
{
   cout<<"num1 = "<<d1.num1<<endl;
   cout<<"num2 = "<<d1.num2<<endl;
}
int main()
{
    data d1;
    d1.setdata(12,67);
    display(d1);
    return 0;
}
