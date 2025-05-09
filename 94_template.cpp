// template for multiple parameter
#include <iostream>
using namespace std;
template <class t1, class t2>
class Data
{
    t1 data1;
    t2 data2;

public:
    void setData(t1 a, t2 b)
    {
        data1 = a;
        data2 = b;
    }
    void displayData()
    {
        cout << "data1 : " << data1 << endl;
        cout << "data2 : " << data2 << endl;
        cout << "---------------\n";
    }
};
int main()
{
    Data<int, string> d1;
    d1.setData(12, "home");
    d1.displayData();

    Data<int, int> d2;
    d2.setData(45, 78);
    d2.displayData();

    Data<float, char> d3;
    d3.setData(12.45, 'K');
    d3.displayData();

    Data<char, int> d4;
    d4.setData('H', 99);
    d4.displayData();
    return 0;
}