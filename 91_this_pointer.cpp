// this pointer
#include <iostream>
using namespace std;
class emp
{
public:
    int id;
    float sallary;

public:
    emp(int id, float sallary)
    {
        this->id = id;
        this->sallary = sallary;
    }
    void display()
    {
        int id = 700;
        cout << "local id : " << id << endl;
        cout << "emp id  : " << this->id << endl;
        cout << "emp sallary : " << this->sallary << endl;
    }
};
int main()
{
    emp e1(101, 12000), e2(102, 15000);
    e1.display();
    e2.display();

    return 0;
}