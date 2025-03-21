// wap to print day name according to number.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a num : ";
    cin >> num;
    switch (num)
    {
    case 1:
        cout << "monday" << endl;
        break;
    case 2:
        cout << "tuesday" << endl;
        break;
    case 3:
        cout << "wednusday" << endl;
        break;
    case 4:
        cout << "thursday" << endl;
        break;
    case 5:
        cout << "friday" << endl;
        break;
    case 6:
        cout << "saturday" << endl;
        break;
    case 7:
        cout << "sunday" << endl;
        break;
    default:
        cout << "enter 1 to 7 number";
    }
    return 0;
}