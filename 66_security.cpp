#include <iostream>
using namespace std;
class game
{
    int p;
    int q;

public:
    void setdata(int a, int b)
    {
        p = a/2;
        q = b;
    }
    void display()
    {
        cout << "p : " << p << endl;
        cout << "q : " << q << endl;
    }
};
int main()
{
    game g1;
    g1.setdata(12, 5);
    g1.display();
    return 0;
}