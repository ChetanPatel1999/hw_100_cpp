#include <iostream>
using namespace std;
class perant
{
public:
    void show()
    {
        cout << "hi i am show" << endl;
    }
    void display()
    {
        cout << "perant display" << endl;
    }
};
class child : public perant
{
public:
    void display() // method override
    {
        cout << "child display" << endl;
    }
};
int main()
{
    child c1;
    c1.display();
    c1.show();
    return 0;
}