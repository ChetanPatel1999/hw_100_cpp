// example of class and object
#include <iostream>
using namespace std;
class mobile
{
    string name;// data member
    int price;// data member
    string color;// data member
    float rating;// data member

public:
    void setmobile(string s1, int p, string s2, float f)//setter method
    {
        name = s1;
        price = p;
        color = s2;
        rating = f;
    }
    void getmobile()//getter method
    {
        cout << "mobile info : " << endl;
        cout << "mobile name : " << name << endl;
        cout << "mobile price : " << price << endl;
        cout << "mobile color : " << color << endl;
        cout << "mobile rating : " << rating << endl;
        cout << "________________________________________"<< endl;
    }
};
int main()
{
    mobile m1, m2, m3;
    m1.setmobile("vivo", 20000, "blue", 4.3);
    m2.setmobile("samsung", 98000, "black", 4.9);
    m3.setmobile("oppo", 15000, "red", 3.6);
    m1.getmobile();
    m2.getmobile();
    m3.getmobile();
    return 0;
}