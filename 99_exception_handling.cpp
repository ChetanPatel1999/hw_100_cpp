#include <iostream>
using namespace std;
int main()
{
    int x = -56;
    try
    {
        cout << "inside try block" << endl;
        if (x < 0)
        {
            throw x;
        }
        cout << "value of x : " << x << endl;
        cout << "try block end" << endl;
    }
    catch (int x)
    {
        cout << "nagative value error value is " << x << endl;
        cout << "catch block is run" << endl;
    }
    cout << "after try-catch block " << endl;
    cout << "programm run succesfully" << endl;
    return 0;
}