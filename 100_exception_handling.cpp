//zero division error is handle by exception handling
#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    printf("start main function \n");
    printf("this is division programm :\n");
    printf("enter first num : ");
    cin >> a; // 12
    cout << "enter second num : ";
    cin >> b; // 0
    try
    {
        if (b == 0)
        {
            throw b;
        }
        c = a / b;
        cout << "division ans : " << c << endl;
        cout << "end divison programm" << endl;
    }
    catch (float b)
    {
        cout << "zeroDivisionError" << endl;
    }
    printf("this is addition programm :\n");
    printf("enter first num : ");
    cin >> a;
    cout << "enter second num : ";
    cin >> b;
    c = a + b;
    cout << "addition ans : " << c << endl;
    cout << "end addition programm" << endl;

    return 0;
}