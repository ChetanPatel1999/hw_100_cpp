// destructor in cpp
#include <iostream>
using namespace std;
class demo
{
public:
    demo() // constructor
    {
        cout << "constructor is called " << endl;
    }
    ~demo()
    {
        cout << "destructor is called" << endl;
    }
    void display()
    {
        cout << "hi i am display" << endl;
    }
};
int main()
{
    demo d1, d2;
    cout << "inside main function" << endl;
    {
        demo d3;
        cout << "inside block" << endl;
    }
    cout << "after block" << endl;
    return 0;
}