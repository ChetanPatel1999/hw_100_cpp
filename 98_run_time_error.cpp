#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    printf("start main function \n");
    printf("this is division programm :\n");
    printf("enter first num : ");
    cin >> a;
    cout << "enter second num : ";
    cin >> b;
    c = a / b;
    cout << "division ans : " << c << endl;
    cout << "end divison programm" << endl;

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