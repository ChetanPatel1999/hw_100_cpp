// constructor in cpp
#include <iostream>
using namespace std;
class demo
{
public:
    demo() // constructor type method
    {
        cout << "0 arg constructor is called" << endl;
    }
    demo(int a) // constructor type method
    {
        cout << "1 arg constructor is called" << endl;
    }
    demo(int a, int b) // constructor type method
    {
        cout << "2 arg constructor is called" << endl;
    }
    void display()
    {
        cout << "hi i am display" << endl;
    }
};
int main()
{
    demo d1(8);
    
    return 0;
}