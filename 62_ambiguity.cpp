#include <iostream>
using namespace std;

class base1
{
public:
    void great()
    {
        cout << "good morning  ";
    }
};
class base2
{
public:
    void great()
    {
        cout << "good afternoon  ";
    }
};
class derived : public base1, public base2
{
public:
    void great()
    {
       base1::great();
       base2::great();
    }
};
int main()
{
    derived b1;
    b1.great();
    return 0;
}