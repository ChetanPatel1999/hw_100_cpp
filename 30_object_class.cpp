// example of class and object
#include <iostream>
using namespace std;
class mobile
{
    public:
    string name;
    int price;
    string color;
    float rating;
};
int main()
{
    mobile m1, m2, m3;
    m1.name = "vivo";
    m1.price = 20000;
    m1.color = "blue";
    m1.rating = 4.5;
    m2.name = "samsung";
    m2.price = 98000;
    m2.color = "black";
    m2.rating = 4.5;
    cout << "m1 mobile information : " << endl;
    cout << "name : " << m1.name << endl;
    cout << "price : " << m1.price << endl;
    cout << "color : " << m1.color << endl;
    cout << "rating : " << m1.rating << endl;
    cout << "m2 mobile information : " << endl;
    cout << "name : " << m2.name << endl;
    cout << "price : " << m2.price << endl;
    cout << "color : " << m2.color << endl;
    cout << "rating : " << m2.rating << endl;
    return 0;
}