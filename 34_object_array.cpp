#include <iostream>
using namespace std;
class emp
{
    int id;
    float sallary;

public:
    void set_emp()
    {
        cout << "enter emp info : " << endl;
        cout << "enter emp id : ";
        cin >> id;
        cout << "enter emp sallary :";
        cin >> sallary;
    }
    void get_emp()
    {
        cout << "emp info : " << endl;
        cout << "emp id : " << id << endl;
        cout << "emp sallary : " << sallary << endl;
        cout << "___________________________________" << endl;
    }
};
int main()
{
    int n;
    cout << "enter emp count : ";
    cin >> n;
    emp e[n];
    int i;
    for (i = 0; i < n; i++)
    {
        e[i].set_emp();
    }
    for (i = 0; i < n; i++)
    {
        e[i].get_emp();
    }
    cout<<"___________________________________"<<endl;
    cout<<"total emp count : "<<n<<endl;
    return 0;
}