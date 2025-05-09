// template for class
#include <iostream>
using namespace std;
template <class t1>
class Data
{
    t1 data1;
    t1 data2;

public:
    void setData(t1 a, t1 b)
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
    Data<int> d1;
    d1.setData(12, 56);
    d1.displayData();

    Data<string> d2;
    d2.setData("home", "chair");
    d2.displayData();

    Data<float> d3;
    d3.setData(12.45, 77.56);
    d3.displayData();

    Data<char> d4;
    d4.setData('H', 'L');
    d4.displayData();
    return 0;
}