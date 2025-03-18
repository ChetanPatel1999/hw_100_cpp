#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter age : ";//printf("enter your age : ")
    cin >> age; // 67    scanf("%d",&age);
    if (age >= 18)
    {
        cout << "you are eligible for casting vote";
    }
    else
    {
        cout << "you are not eligible for casting vote";
    }
    return 0;
}