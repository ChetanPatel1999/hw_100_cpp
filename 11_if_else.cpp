// wap to check given char is upper case or lowercase.
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter a char : ";
    cin >> ch; // 8
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            cout << "char is upper case";
        }
        else
        {
            cout << "char is lower case";
        }
    }
    else
    {
        cout << "char is not alphabet";
    }
    return 0;
}