// wap to check givan number is positive or nagative or zero.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a num : ";
    cin >> num;
    if (num == 0)
    {
        cout << "num is zero" << endl;
    }
    else if (num > 0)
    {
        cout << "num is positive";
    }
    else
    {
        cout << "num is nagative";
    }
    return 0;
}